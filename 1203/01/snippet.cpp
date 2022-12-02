#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, v;
    cin>>v;
    cin>>n;
    vector<int>dp(v+1,0);
    vector<int>volum(n);
    for(int i=0;i<n;i++)
    cin>>volum[i];
    for(int i=0;i<n;i++){
        for(int j=v;j>=volum[i];j--){
            dp[j]=max(dp[j],dp[j-volum[i]]+volum[i]);
        }
    }
    cout<<v-dp[v]<<endl;
    return 0;
}
// 64 位输出请用 printf("%lld")