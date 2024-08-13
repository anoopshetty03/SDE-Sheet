void solve(Node* &root, int level, vector<int>&ans){
    //base case
    if(root == NULL) return;
    
    if(ans.size() == level){
        ans.push_back(root -> data);
    }

    solve(root -> right, level+1, ans);    
    solve(root -> left, level+1, ans);

}

//Function to return a list containing elements of right view of the binary tree.
vector<int> rightView(Node *root)
{
   vector<int> ans;
   solve(root, 0, ans);
   return ans;
}