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

  void inorder(TreeNode*root,vector<int>&collect)
  {
    if(root==nullptr)
    return;
    inorder(root->left,collect);
     collect.push_back(root->val);
     inorder(root->right,collect);

  }
   TreeNode*construct(vector<int>&collect,int low,int high)
   {
    if(low>high)
    return nullptr;
    int mid=(low+high)/2;
    TreeNode* node=new TreeNode(collect[mid]);
    node->left=construct(collect,low,mid-1);
    node->right=construct(collect,mid+1,high);
    return node;
   }
    TreeNode* deleteNode(TreeNode* root, int key) {
        vector<int>collect;
        inorder(root,collect);
        collect.erase( remove(collect.begin(),collect.end(),key),collect.end());
        return construct(collect,0,collect.size()-1);
        
    }
};