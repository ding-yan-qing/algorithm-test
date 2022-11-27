/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */

class Solution {
public:
    /**
     * 
     * @param root TreeNode类 the root of binary tree
     * @return int整型vector<vector<>>
     */
    vector<vector<int>> res;
    vector<int> preorder, inorder, postorder;
    vector<vector<int>> threeOrders(TreeNode* root){
        preOrder(root);
        inOrder(root);
        postOrder(root);
        res.push_back(preorder);
        res.push_back(inorder);
        res.push_back(postorder);
        return res;
    }
    void preOrder(TreeNode* root){
        if(!root)return;
        preorder.push_back(root->val);
        preOrder(root->left);
        preOrder(root->right);
    }
    void inOrder(TreeNode* root){
        if(!root)return;
        inOrder(root->left);
        inorder.push_back(root->val);
        inOrder(root->right);
    }
    void postOrder(TreeNode* root){
        if(!root)return;
        postOrder(root->left);
        postOrder(root->right);
        postorder.push_back(root->val);
    }
};