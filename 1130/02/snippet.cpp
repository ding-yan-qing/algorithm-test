#include <iostream>
using namespace std;

int main() {
    long long int q,a,b,p;
    cin >> q;
    while(q--){
        cin >>a>>b>>p;
        long long int k=0;
        while(b--){
            k+=a%p;
        }
        cout<< k%p<<endl;
        k=0;
    }
    return 0;
}
// 64 位输出请用 printf("%lld")