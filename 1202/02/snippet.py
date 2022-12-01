#
# 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
#
# 
# @param triangle int整型二维数组 
# @return int整型
#
class Solution:
    def minTrace(self , triangle: List[List[int]]) -> int:
        # write code here
        if len(triangle) == 0:
            return 0
        if len(triangle) == 1:
            return triangle[0][0]
        dp = triangle[len(triangle) - 1]
        for row in range(len(triangle)-2,-1,-1):
            for col in range(len(triangle[row])):
                dp[col] = triangle[row][col] + min(dp[col],dp[col+1])
        return dp[0]

