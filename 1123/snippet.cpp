#include <bits/stdc++.h>
#include <iostream>
using namespace std;

stack<char> sk;
string s, res;

int main() {
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        char c = s[i];
        if(!sk.empty() && sk.top() == c){
            sk.pop();
        }else{
            sk.push(c);
        }
    }

    if(sk.empty()){
        cout << 0 << endl;
    }else{
        while(!sk.empty()){
            res = sk.top() + res;
            sk.pop();
        }
        cout << res;
    }

    return 0;
}
// 64 位输出请用 printf("%lld")