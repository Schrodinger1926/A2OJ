n = input()
A = [int(i) for i in raw_input().split()]
A_new = []
for i in range(n):
	A_new.append(((i+1),A[i]))
A_new = sorted(A_new, key=lambda x: x[1])
print ' '.join(map(str,[int(i[0]) for i in A_new]))