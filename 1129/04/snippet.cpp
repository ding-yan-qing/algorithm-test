#include <iostream>
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod = 1e9 + 7;
ll dp[10000005][2];
int n;

int main() {
    cin >> n;
    dp[1][0] =1;
    dp[2][0] =5;
    dp[1][1] = 2;
    dp[2][1] =7;
    for(int i =3; i<= n; ++i){
        dp[i][0] = (1+ dp[i-1][1]*2) % mod;
        dp[i][1] =(2+dp[i-1][1]*2 + dp[i-1][0]) % mod;
    }
    cout <<dp[n][0]<<' '<<dp[n][1] <<endl;
    return 0;
}
// 64 位输出请用 printf("%lld")