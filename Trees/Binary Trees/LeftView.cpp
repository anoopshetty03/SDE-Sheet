// https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1 
void solve(Node* &root, int level, vector<int>&ans){
    //base case
    if(root == NULL) return;
    
    if(ans.size() == level){
        ans.push_back(root -> data);
    }
    
    solve(root -> left, level+1, ans);
    solve(root -> right, level+1, ans);
}

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   vector<int> ans;
   solve(root, 0, ans);
   return ans;
}