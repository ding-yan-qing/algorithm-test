class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        int n = pushV.size();
        stack<int> s;
        int j = 0;
        for(int i = 0; i < n; i++){
            while(j < n && (s.empty() || s.top() != popV[i])){
                s.push(pushV[j]);
                j++;
            }
            if(s.top() == popV[i])
            s.pop();
            else
            return false;
        }
        return true;
    }
};