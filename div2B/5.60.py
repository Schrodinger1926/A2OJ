n = input()
a = map(int, raw_input().split())
m = a[-1]
counter = 0
for i in range(len(a) - 2, -1, -1):
	if a[i] > m:
		counter += (a[i] - m)
	m = a[i]
print counter