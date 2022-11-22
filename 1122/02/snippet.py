#
# 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
#
# 
# @param tokens string字符串一维数组 
# @return int整型
#
class Solution:
    def evalRPN(self , tokens: List[str]) -> int:
        stack = []
        for i in tokens:
            if i in "+-*/":
                a = stack.pop()
                b = stack.pop()
                if i == '+':
                    stack.append(b + a)
                elif i == '-':
                    stack.append(b - a)
                elif i == '*':
                    stack.append(b * a)
                elif i == '/':
                    stack.append(int(b / a))
            else:
                stack.append(int(i))
        return stack[0]