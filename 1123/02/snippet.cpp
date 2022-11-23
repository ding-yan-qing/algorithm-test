
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * 返回表达式的值
     * @param s string字符串 待计算的表达式
     * @return int整型
     */
    vector<int> function(string s, int index){
    stack<int> stack;
    int num = 0;
    char op = '+';
    int i;

    for(i = index; i < s.length(); i++){
        if(isdigit(s[i])){
            num = num * 10 + s[i] - '0';
            if(i != s.length() - 1)
            continue;
        }
        if(s[i] == '('){
            vector<int> res = function(s, i + 1);
            num = res[0];
            i = res[1];
            if(i != s.length() - 1)
            continue;
        }
        switch(op){
            case '+':
            stack.push(num);
            break;
            case '-':
            stack.push(-num);
            break;
            case '*':
            int temp = stack.top();
            stack.pop();
            stack.push(temp * num);
            break;
        }
        num = 0;
        if(s[i] == ')')
        break;
        else
        op = s[i];
    }
    int sum = 0;
    while(!stack.empty()){
        sum += stack.top();
        stack.pop();
    }
    return vector<int> {sum, i};
    }
    int solve(string s){
        return function(s, 0)[0];
    }
};