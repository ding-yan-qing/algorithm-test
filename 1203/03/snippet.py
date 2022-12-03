import sys

n,v = map(int,input().strip().split())
dp_1 = [0 for _ in range(v+1)]
dp_2 = [float('-inf') for _ in range(v+1)]
q,w = [],[]
dp_2[0] = 0
for _ in range(n):
    qi,wi = map(int,input().strip().split())
    q.append(qi)
    w.append(wi)
for j in range(n):
    for i in range(v+1):
        if i>=q[j]:
            dp_1[i] = max(dp_1[i],dp_1[i-q[j]]+w[j])
            dp_2[i] = max(dp_2[i],dp_2[i-q[j]]+w[j])
print(dp_1[-1])
print(dp_2[-1] if dp_2[-1] != float('-inf') else 0)