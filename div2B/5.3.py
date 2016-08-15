n,m,k = map(int,raw_input().split())
x = []
for i in range(m+1):
	xi = input()
	x.append(xi)
_fedor = x[-1]
_Fedor_bin = bin(_fedor)[2:]
_Fedor_bin = '0'*(n - len(_Fedor_bin)) + _Fedor_bin
_Fedor_dic = {i:j for i,j in enumerate(_Fedor_bin)}
#print _Fedor_dic
counter = 0
for xi in x[:len(x) -1]:
	_bin = bin(xi)[2:]
	_bin = '0'*(n - len(_bin)) + _bin
	_dic = {i:j for i,j in enumerate(_bin)}
	#print len(_Fedor_dic), len(_dic)
	diff = 0
	for key,value in _dic.iteritems():
		if value != _Fedor_dic[key]:
			diff += 1
	if diff <= k:
		counter += 1
print counter


