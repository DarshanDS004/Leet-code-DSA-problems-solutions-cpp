/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

  int findroot(vector<int>&in ,int val)
  {
    int n=in.size();
    for(int i=0;i<n;i++)
    {
        if(val==in[i])
        return i;
    }
    return -1;
  }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()==0||inorder.size()==0)
        return nullptr;
        int val=preorder[0];
        TreeNode*root=new TreeNode(val);
        int pos=findroot(inorder,val);
        vector<int>left(inorder.begin(),inorder.begin()+pos);
         vector<int>right(inorder.begin()+pos+1,inorder.end());
         vector<int>left_tree(preorder.begin()+1,preorder.begin()+1+left.size());
         vector<int>right_tree(preorder.begin()+1+left.size(),preorder.end());

        root->left=buildTree(left_tree,left);
        root->right=buildTree(right_tree,right);
        return root;
    }
  
};