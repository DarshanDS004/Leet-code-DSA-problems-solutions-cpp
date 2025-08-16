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

  vector<int>merge(vector<int>&a1,vector<int>&a2)
  {
    vector<int>res(a1.size()+a2.size());
    int i=0,j=0,k=0;

    while(i<a1.size()&&j<a2.size())
    {
        if(a1[i]<=a2[j])
        {
            res[k++]=a1[i++];
        }
        else
        {
            res[k++]=a2[j++];
        }
    }

    while(i<a1.size())
    {
        res[k++]=a1[i++];
    }
    
    while(j<a2.size())
    {
        res[k++]=a2[j++];
    }

    return res;
  }

 void inorder(TreeNode*root,vector<int>&res)
 {
    if(root==nullptr)
    return;
    inorder(root->left,res);
    res.push_back(root->val);
    inorder(root->right,res);
 }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        if(root1==nullptr&&root2== nullptr)
        return{};
      
        vector<int>t1,t2;
        inorder(root1,t1);
        inorder(root2,t2);
        int m=t1.size();
        int n=t2.size();
        vector<int>res=merge(t1,t2);
        return res;
        
        
    }
};