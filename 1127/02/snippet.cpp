/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 *	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * };
 */
class Solution {
    int post_idx;
    unordered_map<int, int> idx_map;
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param inorder int整型vector 中序遍历序列
     * @param postorder int整型vector 后序遍历序列
     * @return TreeNode类
     */
    TreeNode* helper(int in_left, int in_right, vector<int>& inorder, vector<int>& postorder){
        if(in_left > in_right){
            return nullptr;
        }
        int root_val = postorder[post_idx];
        TreeNode* root = new TreeNode(root_val);
        int index = idx_map[root_val];
        post_idx--;
        root->right = helper(index + 1, in_right, inorder, postorder);
        root->left = helper(in_left, index - 1, inorder, postorder);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        // write code here
        post_idx = (int)postorder.size() - 1;
        int idx = 0;
        for(auto& val : inorder){
            idx_map[val] = idx++;
        }
        return helper(0, (int)inorder.size() - 1, inorder, postorder);
    }
};