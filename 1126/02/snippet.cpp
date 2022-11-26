
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 返回最小的花费代价使得这n户人家连接起来
     * @param n int n户人家的村庄
     * @param m int m条路
     * @param cost intvector<vector<>> 一维3个参数，表示连接1个村庄到另外1个村庄的花费的代价
     * @return int
     */
     static bool cmp(vector<int>& x, vector<int>& y){
         return x[2] < y[2];
     }
     int find(vector<int>& parent, int x){
         if(parent[x] != x)
         parent[x] = find(parent, parent[x]);

         return parent[x];
     }
    int miniSpanningTree(int n, int m, vector<vector<int> >& cost) {
        // write code here
        vector<int> parent(n + 1);
        for(int i = 0; i <= n; i++)
        parent[i] = i;

        sort(cost.begin(), cost.end(), cmp);
        int res = 0;
        for(int i = 0; i < cost.size(); i++){
            int x = cost[i][0];
            int y = cost[i][1];
            int z = cost[i][2];
            int px = find(parent, x);
            int py = find(parent, y);
            if(px != py){
                res += z;
                parent[px] = py;
            }
        }
        return res;
    }
};