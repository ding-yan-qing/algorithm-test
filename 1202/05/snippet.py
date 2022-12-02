import sys

n = input().split(" ")
a = int(n[0])
b = int(n[1])
x = input().strip()
y = input().strip()
dp = [[0]*(b+1) for _ in range(a+1)]
for i in range(a):
    for j in range(b):
        if x[i]==y[j]:
            dp[i+1][j+1]=dp[i][j]+1
        else:
            dp[i+1][j+1]=max(dp[i+1][j],dp[i][j+1])
print(dp[-1][-1])
