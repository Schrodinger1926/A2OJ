X = list(raw_input())
Y = list(raw_input())
M = len(X)
N = len(Y)

# Mark down base cases
P = [[0 for i in range(N+1)] for j in range(M+1)]
for i in range(M + 1):
	for j in range(N + 1):
		if i == 0 or j == 0:
			P[i][j] = max(i,j)

def penality(a,b):
	return 0 if a == b else 1

for i in range(1,M+1):
	for j in range(1,N+1):
		alpha = penality(X[i-1],Y[j-1])
		P[i][j] = min(P[i-1][j] + 1, P[i][j-1] + 1, P[i-1][j-1] + alpha)

# print P[i][j]
for i in range(M,-1,-1):
	print P[i]
	
# ROll back to print actual allignment
X_aligned = []
Y_aligned = []

i = M
j = N
while i > 0 and j > 0:
	print i,j
	data = [(P[i-1][j]+1, 0), (P[i-1][j-1]+penality(X[i-1],Y[j-1]), 2) , (P[i][j-1]+1, 1)]
	data.sort(key=lambda tup: tup[0])
	
	# Came from bottom
	if data[0][1] == 0:
		X_aligned.append(X[i-1])
		Y_aligned.append('-')
		i -= 1

	# Came from left
	elif data[0][1] == 1:
		X_aligned.append('-')
		Y_aligned.append(Y[j-1])
		j -= 1

	# Came from vertical opposite box
	else:
		X_aligned.append(X[i-1])
		Y_aligned.append(Y[j-1])
		i -= 1
		j -= 1

X_aligned.reverse()
Y_aligned.reverse()
print X_aligned
print Y_aligned