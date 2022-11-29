class Solution {
public:
    vector<string> solution;
    void Hanoi(int n, string left, string mid, string right){
        if(n == 0)return;
        Hanoi(n-1, left, right, mid);
        solution.push_back("move from " + left + " to " + right);
        Hanoi(n - 1, mid, left, right);
    }

    vector<string> getSolution(int n){
        Hanoi(n, "left", "mid", "right");
        return solution;
    }
};