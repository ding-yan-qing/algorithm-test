import sys

while True:
    try:
        a = int(input())
        b = list(map(int,input().split()))
        dp = [0]*a
        for i in range(a):
            if i == 0:
                dp[i] = b[i]
            else:
                dp[i] = max(dp[i-1]+b[i],b[i])
        print(max(dp))
    except:
        break
