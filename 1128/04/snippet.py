#
# 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
#
# 判断岛屿数量
# @param grid char字符型二维数组 
# @return int整型
#
class Solution:
    def dfs(self, grid:List[List[chr]], i:int , j:int):
        n = len(grid)
        m = len(grid[0])
        grid[i][j] = '0'
        if i - 1>= 0 and grid[i-1][j] == '1':
            self.dfs(grid, i-1, j)
        if i + 1 < n and grid[i+ 1][j] == '1':
            self.dfs(grid, i + 1, j)
        if j -1 >= 0 and grid[i][j-1] == '1':
            self.dfs(grid, i, j-1)
        if j + 1 < m and grid[i][j + 1]  == '1':
            self.dfs(grid, i, j+ 1)
    def solve(self , grid: List[List[str]]) -> int:
        # write code here
        n = len(grid)
        if n ==0:
            return 0
        m = len(grid[0])
        count = 0
        for i in range(n):
            for j in range(m):
                if grid[i][j] == '1':
                    count += 1
                    self.dfs(grid, i,j)
        return count
