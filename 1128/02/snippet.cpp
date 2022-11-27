#include <iostream>
#include <queue>
#include<bits/stdc++.h>
using namespace std;

queue<pair<int,int>> q;
const int N = 1001;
char a[N][N];
int w[N][N];
bool b[N][N];
int x00,y00,x11,y11;
int n, m;

int dx[4] = {-1, 0, 1, 0}, dy[4] = {0,1,0,-1};

int bfs(){
    memset(w, -1, sizeof(w));
    memset(b, 0, sizeof(b));
    b[x00][y00] = 1;
    q.push(make_pair(x00, y00));
    while(!q.empty()){
        int x1, y1;
        x1 = q.front().first, y1 = q.front().second;
        q.pop();
        for(int i = 0; i<4; i++){
            int x2 = x1 + dx[i], y2 = y1 + dy[i];
            if(x2 >= 1&& x2 <= n&& y2 >=1 && y2<= m&& b[x2][y2] == false && a[x2][y2] =='.'){
            b[x2][y2] =true;
            w[x2][y2] = w[x1][y1] + 1;
            q.push(make_pair(x2,y2));
            }
        }
    }
    return w[x11][y11] + 1;
}

int main() {
    cin >> n>>m;
    cin>> x00>>y00>>x11>>y11;
    for(int i = 1; i<= n;i++)
    for(int j = 1; j<= m; j++)
    cin>> a[i][j];
    if(bfs() == 0)
    cout<<"-1"<<endl;
    else
    cout<<bfs();
    return 0;
}
// 64 位输出请用 printf("%lld")