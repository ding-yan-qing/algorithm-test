class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param tokens string字符串vector 
     * @return int整型
     */
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                if(tokens[i] == "+")
                st.push(n2 + n1);
                if(tokens[i] == "-")
                st.push(n2 - n1);
                if(tokens[i] == "*")
                st.push(n2 * n1);
                if(tokens[i] == "/")
                st.push(n2 / n1);
            }else{
                int k = stoi(tokens[i]);
                st.push(k);
            }
        }
        return st.top();
    }
};