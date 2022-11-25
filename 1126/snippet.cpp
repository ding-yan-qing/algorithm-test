#include<iostream>
#include<vector>
#include<queue>

#define MAX 200001
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    vector<int> adjlist[MAX]; // 用于模拟邻接表的vector容器
    int inDegree[MAX] = {0};
    int a, b;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        adjlist[a].push_back(b);
        inDegree[b]++;
    }
    queue<int> que;
    for(int i = 1; i <= n; i++){
        if(inDegree[i] == 0){
            que.push(i);
        }
    }
    int cnt = 0;
    vector<int> res;
    while(!que.empty()){
        int u = que.front();
        que.pop();
        res.push_back(u);
        for(int i = 0; i < adjlist[u].size(); i++){
            int v = adjlist[u][i];
            inDegree[v]--;
            if(inDegree[v] == 0){
                que.push(v);
            }
        }
        cnt++;
    }
    if(cnt == n){
        for(int i = 0; i < res.size(); i++){
            cout << res[i];
            if(i != res.size() -1){
                cout << " ";
            }
        }
    }else{
        cout << -1;
    }
    return 0;
}