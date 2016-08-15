N = input()
A = [int(i) for i in raw_input().split()]
K = sum(A)

if K%3 != 0:
	print 0
else:
	s = sum(A)
	s /= 3
	
	# Identify third part
	cnt2 = [0 for i in range(len(A))]
	ss = 0
	cum = 0
	for i in range(len(A)-1, 1, -1):
		ss += A[i]
		if ss == s:
			cum += 1
		cnt2[i] = cum
	
	ways = 0
	# Identify first part
	cnt1 = [0 for i in range(len(A))]
	ss = 0
	for i in range(len(A)-2):
		ss += A[i]
		if ss == s:
			cnt1[i] = 1
			ways += cnt2[i+2]
	print ways