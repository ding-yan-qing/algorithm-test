
class Solution {
public:
    bool isValid(vector<int> &pos, int row, int col){
        for(int i = 0; i < row; i++){
            if(row == i || col == pos[i] || abs(row - i) == abs(col - pos[i]))
            return false;
        }
        return true;
    }
    void recursion(int n, int row, vector<int>& pos,int &res){
        if(row == n){
            res++;
            return;
        }
        for(int i = 0; i<n; i++){
            if(isValid(pos, row, i)){
                pos[row] = i;
                recursion(n, row + 1,pos,res);
            }
        }
    }
    int Nqueen(int n){
        int res = 0;
        vector<int> pos(n,0);
        recursion(n, 0, pos, res);
        return res;
    }
};