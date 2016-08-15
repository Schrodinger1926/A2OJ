n,t = map(int,raw_input().split())
P = list(raw_input())


for turn in range(t):
	P_copy = P[:]
	i = 0
	while i < len(P) - 1:
		#print P_copy
		if P[i] < P[i+1]:
			P_copy[i],P_copy[i+1] = P_copy[i+1],P_copy[i]
			i += 2
		else:
			i += 1
	P = P_copy[:]
print ''.join(map(str,P_copy))
