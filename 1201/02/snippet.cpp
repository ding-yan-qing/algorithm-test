#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define maxn 200000+10
#define ll long long
int n;

int main() {
    scanf("%d", & n);
    priority_queue<ll, vector<ll>, greater<ll>> q;
    ll num;
    for(int i =0;i<n;i++){
        scanf("%lld", & num);
        q.push(num);
    }
    ll sum = 0;
    while(!q.empty()){
        ll a = q.top();
        q.pop();
        if(q.empty()){
            sum+=a;
        }
        else{
            ll b = q.top();
            q.pop();
            sum += a+b;
            if(!q.empty()){
                q.push(a+b);
            }
        }
    }
    printf("%lld\n" , sum);
    return 0;
}
// 64 位输出请用 printf("%lld")