N = input()
store = []
for i in range(N):
	ai, bi = map(int, raw_input().split())
	store.append((bi, ai))

# sort according to bi's and then to ai's
store.sort(key=lambda tup: tup[0])
store.sort(key=lambda tup: tup[1])

# iterate over each exam to find min, if ended up in bi
mini = 0
for i in range(N):
	bi, ai = store[i]
	mini = bi if bi >= mini else ai

print mini