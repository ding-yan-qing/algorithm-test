#
# 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
#
# 
# @param pushV int整型一维数组 
# @param popV int整型一维数组 
# @return bool布尔型
#
class Solution:
    def IsPopOrder(self , pushV: List[int], popV: List[int]) -> bool:
        n = len(pushV)
        s = []
        j = 0
        for i in range(n):
            while j < n and (len(s) == 0 or s[-1] != popV[i]):
                s.append(pushV[j])
                j += 1
            if s[-1] == popV[i]:
                s.pop()
            else:
                return False
        return True