#include <iostream>
#include<string>
using namespace std;

const int N = 1e5 + 10;
int a[N];
int pfront;
int prear;
int n, q;
int MAXSIZE;

int main() {
    cin >> n >> q;
    string s;
    MAXSIZE = n + 1;
    while(q --){
        cin >> s;
        if(s == "push"){
            if(pfront == (prear + 1) % MAXSIZE){
                int t;
                cin >> t;
                cout << "full" << endl;
            }else{
                int t;
                cin >> t;
                a[prear] = t;
                prear ++;
                prear = prear % MAXSIZE;
            }
        }
        if(s == "front"){
            if(prear == pfront){
                cout << "empty" << endl;
            }else{
                cout << a[pfront] << endl;
            }
        }
        if(s == "pop"){
            if(prear == pfront){
                cout << "empty" <<endl;
            }else{
                cout << a[pfront] << endl;
                pfront++;
                pfront = pfront % MAXSIZE;
            }
        }
    }
    return 0;
}
// 64 位输出请用 printf("%lld")