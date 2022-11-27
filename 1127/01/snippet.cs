using System;
using System.Collections.Generic;

/*
public class TreeNode
{
	public int val;
	public TreeNode left;
	public TreeNode right;

	public TreeNode (int x)
	{
		val = x;
	}
}
*/

class Solution {
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param root TreeNode类 the root of binary tree
     * @return int整型二维数组
     */
    public List<List<int>> threeOrders (TreeNode root) {
        // write code here
        List<List<int>> ans = new List<List<int>>();
        var a = new List<int>();
        var b = new List<int>();
        var c = new List<int>();
        Parse1(root, ref a);
        Parse2(root, ref b);
        Parse3(root, ref c);
        ans.Add(a);
        ans.Add(b);
        ans.Add(c);
        return ans;
    }
    void Parse1(TreeNode root, ref List<int> L){
        if(root == null)return;
        L.Add(root.val);
        Parse1(root.left, ref L);
        Parse1(root.right, ref L);
    }
    void Parse2(TreeNode root, ref List<int> L){
        if(root == null)return;
        Parse2(root.left, ref L);
        L.Add(root.val);
        Parse2(root.right, ref L);
    }
    void Parse3(TreeNode root, ref List<int> L){
        if(root == null)return;
        Parse3(root.left, ref L);
        Parse3(root.right, ref L);
        L.Add(root.val);
    }
}