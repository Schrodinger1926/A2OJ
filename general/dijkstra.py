" This too shall pass :)"
class node(object):
  "adj = [[node1, weight1], [node2, weight2]] "
  def __init__(self, idx):
    self.adj = []
    self.dist = float("inf")
    self.seen = False
    self.idx = idx


def extract_min():
  H[1], H[len(H)-1] = H[len(H)-1], H[1]
  H[1].idx, H[len(H)-1].idx = H[len(H)-1].idx, H[1].idx
  r = H.pop()
  if len(H) > 1:
  	heapify(1)
  return r


def heapify(i):
  # search up 
  node = H[i]
  if i/2 >= 1 and H[i/2].dist > H[i].dist:
    while i > 1 and H[i/2].dist > node.dist:
      H[i] = H[i/2]
      H[i].idx = i
      i /= 2
    H[i] = node
    H[i].idx = i
    return
  
  # search down
  elif i <= (len(H)-1)/2:
    while i <= (len(H)-1)/2:
      idx_min = compare(i)
      if idx_min is not i:
        H[i], H[idx_min] = H[idx_min], H[i]
        H[i].idx, H[idx_min].idx = H[idx_min].idx, H[i].idx
        i = idx_min
      else:
        break
  else:
    return


def compare(i):
  # Find min among parent and children/child
  # Both children are available
  if (2*i + 1) <= len(H)-1:
    m =  2*i if H[2*i].dist < H[2*i + 1].dist else (2*i + 1)
    m_ = i if H[i].dist < H[m].dist else m
  # Only left child is available
  else:
    m_ =  2*i if H[2*i].dist < H[i].dist else i
  return m_


def insert(node):
  H.append(node)
  heapify(len(H)-1)


def update(node):
  heapify(node.idx)

global H
T = input()
for t in range(T):
	n, m = map(int, raw_input().split())
	store = [node(i) for i in range(1, n+1)]
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
	H = [-1] 				# empty element of heap
	# build heap

	for i in range(n):
		insert(store[i])
	while len(H) != 1:
		u = extract_min()
		u.seen = True
		for v, w in u.adj:
			if v.seen == False and w + u.dist < v.dist:
				v.dist = w + u.dist
				update(v)

	for i in range(s):
		print store[i].dist if store[i].dist != float("inf") else -1,
	
	for i in range(s+1,n):
		print store[i].dist if store[i].dist != float("inf") else -1,
	print ''