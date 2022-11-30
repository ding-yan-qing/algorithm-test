#
# 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
#
# 将给定数组排序
# @param arr int整型一维数组 待排序的数组
# @return int整型一维数组
#
class Solution:
    def MySort(self , arr: List[int]) -> List[int]:
        # write code here
        n = len(arr)
        for i in range(0,n-1):
            flag =False
            for j in range(0,n-1-i):
                if arr[j]>arr[j+1]:
                    flag = True
                    arr[j],arr[j+1]=arr[j+1],arr[j]
            if flag==False:
                break
        return arr