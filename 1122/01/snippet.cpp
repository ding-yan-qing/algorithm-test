
class Solution {
public:
    /**
     * 
     * @param s string字符串 
     * @return bool布尔型
     */
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(')
            st.push(')');
            else if(s[i] == '[')
            st.push(']');
            else if(s[i] == '{')
            st.push('}');
            else if(st.empty())
            return false;
            else if(st.top() == s[i])
            st.pop();
        }
        return st.empty();
    }
};