N = input()
A = [int(i) for i in raw_input().split()]
if N == 1:
	print 'YES'
else:
	dic = {}
	for e in A:
		try:
			dic[e] += 1
		except KeyError:
			dic[e] = 1
	keys = dic.keys() # such a benifit here
	flag = True
	for key in keys:
		if (dic[key] > (N/2) + N%2):
			flag = False
			print "NO"
			break
	if flag:
		print "YES"