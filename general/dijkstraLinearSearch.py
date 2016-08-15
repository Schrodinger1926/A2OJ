" This too shall pass :)"
from time import time
class node(object):
	"adj = [[node1, weight1], [node2, weight2]] "
	def __init__(self):
		self.adj = []
		self.dist = float("inf")
		self.seen = False


def extract_min_linear_search(H):
	m = H[0][0]
	idx = 0
	for i in range(len(H)):
		if H[i][0] < m:
			m = H[i][0]
			idx = i
	return H[idx]
t0 = time()

T = input()
for t in range(T):
	n, m = map(int, raw_input().split())
	store = [node() for _ in range(n)]
	# construct undirected multiple edge graph
	for _ in range(m):
		u, v, w = map(int, raw_input().split())
		u -= 1		# adjust indices
		v -= 1		# adjust indices
		store[u].adj.append([store[v], w])
		store[v].adj.append([store[u], w])
	s = input()
	s -= 1  				# adjust index
	store[s].dist = 0		# starting node
	H = [[store[i].dist, store[i]] for i in range(n)]
	while len(H) != 0:
		d, u = extract_min_linear_search(H)
		u.seen = True
		for v, w in u.adj:
			if v.seen == False and w + u.dist < v.dist:
				v.dist = w + u.dist  		# Load found here
		# build again in O(N)
		H = []
		for i in range(n):
			if store[i].seen is False:
				H.append([store[i].dist, store[i]])

	# for i in range(s):
	# 	print store[i].dist if store[i].dist != float("inf") else -1,
	
	# for i in range(s+1,n):
	# 	print store[i].dist if store[i].dist != float("inf") else -1,
	# print ''
print time() - t0