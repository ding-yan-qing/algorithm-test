#include <iostream>
#include<queue>
#include<vector>
using namespace std;

struct cmp{
    bool operator()(const pair<int,int> a,const pair<int,int> b){
        if(a.second > b.second)
        return true;
        else if(a.second == b.second)
        return a.first < b.first;
        return false;
    }
};

int main() {
    int n,total = 0,time = 0, a, b;
    cin >> n;
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> qu;
    while(n--){
        cin >> a >>b;
        qu.push(pair<int,int>(a,b));
    }
    while(!qu.empty()){
        auto cur = qu.top();
        qu.pop();
        if(cur.first >= time){
            total++;
            time = cur.second;
        }
    }
    cout<<total;
}
// 64 位输出请用 printf("%lld")