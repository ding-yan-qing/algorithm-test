#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long
long long quickpow1(long long a, long long b,long long p){
    long long ret = 1;
    while(b){
        if(b & 1){
            ret = ret * a%p;
        }
        a = a*a%p;
        b >>= 1;
    }
    return ret;
}

int main() {
    ll q;
    cin >> q;
    while(q--){
        ll a,b,p;
        cin>>a>>b>>p;
        cout<<quickpow1(a,b,p)<<endl;
    }
}
// 64 位输出请用 printf("%lld")