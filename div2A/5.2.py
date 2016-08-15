# need less than O(N*lg(N))
n,m = map(int,raw_input().split())
R = [int(i) for i in raw_input().split()]
counter = 0
if R[0] != 1:
	counter += R[0]-1

for i in range(1,len(R)):
	if R[i] == R[i-1]:
		continue
	elif R[i] > R[i-1]:
		counter += R[i]-R[i-1]
	elif R[i] < R[i-1]:
		counter += n - R[i-1] + R[i]
print counter