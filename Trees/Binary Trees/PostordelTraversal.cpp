// https://leetcode.com/problems/binary-tree-postorder-traversal 
class Solution {
public:
    void helper(TreeNode* root, vector<int>& ans){
        if(root != NULL){
            helper(root->left,ans);
            helper(root->right,ans);
            ans.push_back(root->val);
        }
    } 
    vector<int> postorderTraversal(TreeNode* root) {
        if(root == NULL){
            return {};
        }
        vector<int>ans;
        helper(root,ans);
        return ans;
    }
};