" This too shall pass :)"
"""
NOTE: 
1. NO PATH COMPRESSION
2. Rank[p] = Number of objects in the cluster                     
3. TIME COMPLEXITY O(Mlg(N))
4. SPACE COMPLEXITY O(M + N)
"""
def find(n):
	return parent[n]


def union(u, v):
	small, large = (find(u), find(v)) if rank[find(u)] <= rank[find(v)] else (find(v),find(u))
	rank[large] += rank[small]
	temp = cluster[small]
	cluster[large].extend(temp)
	cluster[small] = []
	for t in temp:
		parent[t] = large


N, M = map(int, raw_input().split())
Adj = [[] for _ in range(N)]
edges = {}
# construct graph
for _ in range(M):
	u, v, w  = map(int, raw_input().split())
	u -= 1
	v -= 1
	try:
		edges[w].append((u,v))
	except Exception, e:
		edges[w] = [(u,v)]

# starting point. useless, such a waste of variable name
s = input()
tot = 0
weights = edges.keys()
weights.sort() 		# In-place sorting
cluster = [[i] for i in range(N)]
# start picking up edges from here
rank = [1 for _ in range(N)]
parent = [i for i in range(N)]
for w in weights:
	for u, v in edges[w]:
		if find(u) !=  find(v):
			union(u, v)
			tot += w
print tot
