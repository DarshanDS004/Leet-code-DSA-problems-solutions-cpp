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
 
 /*
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

*/

class Solution {
public:
  unordered_map<int,int>inmp;
  int idx;

  TreeNode*construct(vector<int>&in,vector<int>&post ,int start ,int end)
  {  
    if(start>end||idx<0)
    return nullptr;
    
    int val=post[idx--];
    TreeNode*root=new TreeNode(val);
    int pos=inmp[val];
    root->right=construct(in,post,pos+1,end);
    root->left=construct(in,post,start,pos-1);
   
    return root;
  }
 TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.empty()||postorder.empty())
        return nullptr;
        int n=postorder.size();
        idx=n-1;
        for(int i=0;i<inorder.size();i++)
        {
            inmp[inorder[i]]=i;
        }
        return construct(inorder,postorder,0,inorder.size()-1);
 }
};