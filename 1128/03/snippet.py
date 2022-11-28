#
# 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
#
# 
# @param n int整型 the n
# @return int整型
#
class Solution:
    def isValid(self, pos: List[int], row:int, col:int):
        for i in range(row):
            if row == i or col == pos[i] or abs(row - i) == abs(col - pos[i]):
                return False
        return True

    def recursion(self, n:int, row:int, pos:List[int], res:int):
        if row == n:
            res += 1
            return int(res)
        for i in range(n):
            if self.isValid(pos, row, i):
                pos[row] = i
                res = self.recursion(n,row+1,pos,res)
        return res

    def Nqueen(self , n: int) -> int:
        res = 0
        pos = [0]*n
        result = self.recursion(n,0,pos,res)
        return result
        # write code here