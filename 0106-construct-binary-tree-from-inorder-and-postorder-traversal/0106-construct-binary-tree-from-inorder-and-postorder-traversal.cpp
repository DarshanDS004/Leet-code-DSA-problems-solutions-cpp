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
  int findroot(vector<int>&in,int val)
  {
    for(int i=0;i<in.size();i++)
    {
        if(in[i]==val)
        return i;
    }
  
  return -1;
  }

 TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.empty()||postorder.empty())
        return nullptr;
        int val=postorder.back();
        int pos=findroot(inorder,val);
        TreeNode*root=new TreeNode(val);
        vector<int>inleft(inorder.begin(),inorder.begin()+pos);
        vector<int>inright(inorder.begin()+pos+1,inorder.end());
        vector<int>postleft(postorder.begin(),postorder.begin()+inleft.size());
         vector<int>postright(postorder.begin()+inleft.size(),postorder.end()-1);
         root->left=buildTree(inleft,postleft);
         root->right=buildTree(inright,postright);
         return root;
        
    }
};