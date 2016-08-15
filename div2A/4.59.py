n = input()
d = {}
for i in xrange(n):
	name = str(raw_input())
	try:
		d[name] += 1
	except Exception, e:
		d[name] = 1

names = d.keys()
if len(names) == 1:
	print names[0]
else:
	if d[names[0]] > d[names[1]]:
		print names[0]
	else:
		print names[1]