#
# 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
#
# 
# @param s string字符串 
# @return bool布尔型
#
class Solution:
    def isValid(self , s: str) -> bool:
        st = []
        for i, char in enumerate(s):
            if char == '(':
                st.append(')')
            elif char == '[':
                st.append(']')
            elif char == '{':
                st.append('}')
            elif len(st) == 0:
                return False
            elif st[-1] == char:
                st.pop()
        return len(st) == 0