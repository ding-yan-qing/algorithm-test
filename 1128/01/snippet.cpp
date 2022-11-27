#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int maxn = 1.5e5;
int e[maxn], ne[maxn], h[maxn], dis[maxn], idx, w[maxn];
bool vis[maxn];
int n, m;
typedef pair<int, int>PII;
void add(int a, int b, int c){
    e[idx] = b;
    w[idx] = c;
    ne[idx] = h[a];
    h[a] = idx++;
}
int dijkstra(){
    memset(dis, 0x3f, sizeof dis);
    priority_queue<PII, vector<PII>, greater<PII>>mo;
    dis[1] = 0;
    mo.push({0,1});
    while(mo.size()){
        auto t = mo.top();
        mo.pop();
        int ver = t.second, distance = t.first;
        if(vis[ver]) continue;
        vis[ver] = 1;
        for(int i = h[ver]; i != -1; i = ne[i]){
            int j = e[i];
            if(dis[j] > w[i] + distance){
                dis[j] = w[i] + distance;
                mo.push({dis[j],j});
            }
        }
    }
    if(dis[n] == 0x3f3f3f3f)return -1;
    else return dis[n];
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    memset(h, -1, sizeof h);
    int x,y,z,i;
    cin >> n >> m;
    for(i = 0;i<m;i++){
        cin >>x >>y;
        add(x,y,1);
        add(y,x,1);
    }
    cout << dijkstra()<<endl;
}
// 64 位输出请用 printf("%lld")