#include <iostream>
using namespace std;

class stack{
    private:
    int s[100000];
    int top_index = -1;

    public:
    void push(int x){
        top_index += 1;
        s[top_index] = x;
    }
    void pop(){
        if(top_index >= 0){
            cout << s[top_index] << endl;
            top_index -= 1;
        }else{
            cout << "error" << endl;
        }
    }
    void top(){
        if(top_index >= 0){
            cout << s[top_index] << endl;
        }else{
            cout << "error" << endl;
        }
    }
};

int main() {
    stack s;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string op;
        cin >> op;
        if(op == "push"){
            int x;
            cin >> x;
            s.push(x);
        }
        if(op == "pop")
        s.pop();
        if(op == "top")
        s.top();
    }
    return 0;
}
// 64 位输出请用 printf("%lld")