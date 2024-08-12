// https://leetcode.com/problems/binary-tree-preorder-traversal/ 
class Solution {
public:
    void helper(TreeNode* root, vector<int>& ans){
        if(root != NULL){
            ans.push_back(root->val);
            helper(root->left,ans);
            helper(root->right,ans);
        }
    } 
    vector<int> preorderTraversal(TreeNode* root) {
        if(root == NULL){
            return {};
        }
        vector<int>ans;
        helper(root,ans);
        return ans;
    }
};