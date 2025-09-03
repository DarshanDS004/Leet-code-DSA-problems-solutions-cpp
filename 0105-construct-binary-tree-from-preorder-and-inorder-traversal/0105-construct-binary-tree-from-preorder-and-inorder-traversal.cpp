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


 //Brute Force 
 /*
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
*/

class Solution {
public:
unordered_map<int,int>inmp;
 int idx=0;
TreeNode*construct(vector<int>&pre,int start,int end)
{
    if(start>end)
    return nullptr;
   
    int val=pre[idx++];
    TreeNode*root;
    root=new TreeNode(val);
    int pos=inmp[val];
    root->left=construct(pre,start,pos-1);
    root->right=construct(pre,pos+1,end);
return  root;
}
 TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()==0||inorder.size()==0)
        return nullptr;

        for(int i=0;i<inorder.size();i++)
        {
            inmp[inorder[i]]=i;
        }
       return construct(preorder,0,inorder.size()-1);
 }
};


