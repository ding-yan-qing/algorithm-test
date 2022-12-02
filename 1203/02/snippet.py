import sys
while True:
    try:
        n,V = map(int,input().split())
        lv,lw = [],[]
        for i in range(n):
            l = list(map(int,input().split()))
            lv.append(l[0])
            lw.append(l[1])
        dp = [0 for _ in range(V + 1)]
        for i in range(n):
            for j in range(V,-1,-1):
                if lv[i]<=V and(j==lv[i] or (dp[j- lv[i]] != 0 and j-lv[i]>0)):
                    dp[j]=max(dp[j],dp[j-lv[i]]+lw[i])
        print(max(dp))
        print(dp[-1])
    except:
        break