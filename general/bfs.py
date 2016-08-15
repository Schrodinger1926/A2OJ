from Queue import *
T = input()
for t in range(T):
	N, M = map(int,raw_input().split())
	adj = [[] for i in range(N)]
	dist = [-1 for i in range(N)]
	# seen = [-1 for i in range(N)]
	# create graph
	for i in range(M):
		# take in edge
		u, v = map(int, raw_input().split())
		adj[u-1].append(v-1)
		adj[v-1].append(u-1)
	s = input()
	dist[s-1] = 0
	q = Queue()
	q.put(s-1)
	while q.empty() is False:
		u = q.get()
		# explore adjacency list
		for v in adj[u]:
			if dist[v] == -1:
				dist[v] = 6 + dist[u]
				q.put(v)

	# print ' '.join(map(str,dist[:s-1]+ dist[s:]))
	for i in range(s-1):
		print dist[i],
	for i in range(s,N):
		print dist[i],
	print '\n'