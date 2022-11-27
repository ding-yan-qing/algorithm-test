# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
#
# 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
#
# 
# @param root TreeNode类 the root of binary tree
# @return int整型二维数组
#
class Solution:
    def threeOrders(self , root: TreeNode) -> List[List[int]]:
        # write code here
        self.res = [[],[],[]]
        self.dfs(root)
        return self.res

    def dfs(self, root):
        if not root: return
        self.res[0].append(root.val)
        self.dfs(root.left)
        self.res[1].append(root.val)
        self.dfs(root.right)
        self.res[2].append(root.val)
        return