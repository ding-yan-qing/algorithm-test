#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[900000];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int max(int a[],int n);
    max(a,n);
    cout<<max(a, n);
    return 0;
}

int max(int a[],int n){
    int maxs = -10000;
    int thism = 0;
    for(int i = 0; i<n; i++){
        thism=thism+a[i];
        if(thism>maxs)
        maxs=thism;
        if(thism<0)
        thism=0;
    }
    return maxs;
}
// 64 位输出请用 printf("%lld")