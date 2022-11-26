#include <iostream>
#include<unordered_map>
#include<vector>
#include<queue>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> dp(5001, INT32_MAX);
    unordered_map<int, vector<pair<int, int>>> um;
    for(int i = 0; i < m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        um[u].push_back({v, w});
        um[v].push_back({u, w});
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dp[1] = 0;
    pq.push({0, 1});
    while(!pq.empty()){
        pair<int, int> t = pq.top();
        pq.pop();
        int cur = t.second;
        if(dp[cur] < t.first)
        continue;
        vector<pair<int, int>> &avai = um[cur];
        for(int i = 0; i < avai.size(); i++){
            int uv = avai[i].first;
            int w = avai[i].second;
            if(dp[cur] + w < dp[uv]){
                dp[uv] = dp[cur] + w;
                pq.push({dp[uv], uv});
            }
        }
    }
    if(dp[n] != INT32_MAX)
    cout << dp[n];
    else
    cout << -1;
}
// 64 位输出请用 printf("%lld")