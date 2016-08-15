from Queue import *
import time
t1 = time.time()
N = input()
q = Queue()
q.put('4')
q.put('7')
d = int(q.get())
while d <= N:
	if N%d == 0:
		print "YES"
		quit()
	else:
		q.put((str(d)+'4'))
		q.put((str(d)+'7'))
	d = int(q.get())

print "NO"
print time.time() - t1