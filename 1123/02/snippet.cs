using System;
using System.Collections.Generic;
using System.Linq;


class Solution {
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 返回表达式的值
     * @param s string字符串 待计算的表达式
     * @return int整型
     */
    public int solve (string s) {
        // write code here
        return cal(s);
    }

    public int cal(string s){
        int sum = 0;
        char sign = '+';
        int i = 0;
        Stack<int> nums = new Stack<int>();
        while(i < s.Length){
            if(s[i] == '('){
                int flag = 1;
                int startIndex = i + 1;
                while(flag > 0){
                    i++;
                    if(s[i] == '(')
                    flag++;
                    if(s[i] == ')')
                    flag--;
                }
                sum = cal(s.Substring(startIndex, i - startIndex));
                i--;
            }else if(char.IsDigit(s[i])){
                sum = sum * 10 + (s[i] - '0');
            }
            if(!char.IsDigit(s[i]) || i == s.Length - 1){
                if(sign == '+')
                nums.Push(sum);
                if(sign == '*')
                nums.Push(sum * nums.Pop());
                if(sign == '-')
                nums.Push(sum * (-1));
                sum = 0;
                sign = s[i];
            }
            i++;
        }
        return nums.Aggregate(0, (total, next) => total + next);
    }
}