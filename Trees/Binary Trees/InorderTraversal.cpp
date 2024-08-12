// https://leetcode.com/problems/binary-tree-inorder-traversal/ 
class Solution {
public:
    void helper(TreeNode* root, vector<int>& ans){
        if(root != NULL){
            helper(root->left,ans);
            ans.push_back(root->val);
            helper(root->right,ans);
        }
    } 
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == NULL){
        return {};
        }
        vector<int>ans;
        helper(root,ans);
        return ans;
    }
};