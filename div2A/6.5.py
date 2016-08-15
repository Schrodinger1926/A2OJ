"""
You can be Mad as a Mad Dog, 
You can Swear, Curse the Fate
But when it comes to End,
You have to Let Go
"""
N = input()
A = [int(i) for i in raw_input().split()]
F = {}

# Generate frequencies
m = max(A)
for i in range(1,m+1):
    F[i] = 0

for n in A:
    F[n] += 1
# Distint elements
keys = F.keys()

# Sub-Problems to be solved by simple brute force
# when there is no key or only one key
S = [0, keys[0]*F[keys[0]]]

# Construct DP
for i in range(1,len(keys)):
    if S[-1] > S[-2] + keys[i]*F[keys[i]]:
        S.append(S[-1])
    else:
        S.append(S[-2] + keys[i]*F[keys[i]])
print S[-1]