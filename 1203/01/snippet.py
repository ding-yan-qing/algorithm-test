import sys

def ZeroOnePack(v,V):
    n = len(v)
    dp = [[0 for _ in range(V+1)] for _ in range(n+1)]

    for i in range(1,n+1):
        for j in range(1,V+1):
            if j >= v[i-1]:
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-v[i-1]]+v[i-1])
            else:
                dp[i][j] = dp[i-1][j]
    return V-dp[-1][-1]

V = int(input())
n = int(input())
v = []
for _ in range(n):
    v.append(int(input()))

print(ZeroOnePack(v,V))
