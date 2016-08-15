" This too shall pass :)"
"""
NOTE: 
1. PATH COMPRESSION
2. Rank[p] = Depth of subtree rooted at p
3. TIME COMPLEXITY O(M*alpha(N))
4. SPACE COMPLEXITY O(M + N)
"""
def find(n):
	if parent[n] == n:
		return n
	return find(parent[n])


def union(u, v):
	small, large = (find(u), find(v)) if rank[find(u)] <= rank[find(v)] else (find(v),find(u))
	if rank[large] == rank[small]:
		rank[large] += 1
	parent[small] = large


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
rank = [1 for _ in range(N)]
parent = [i for i in range(N)]
for w in weights:
	for u, v in edges[w]:
		# Path compression
		parent[u] = find(u)
		parent[v] = find(v)
		if find(u) !=  find(v):
			union(u, v)
			tot += w
print tot