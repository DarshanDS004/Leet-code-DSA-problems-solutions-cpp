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
 void inorder(TreeNode*root,vector<int>&ans)
 {
    if(!root)
    return;
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
 }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>res;
        inorder(root,res);
        return res[k-1];
        
    }
};
*/

class Solution {
public:
int count=0;
int ans=-1;
 void inorder(TreeNode*root,int k)
 {
    if(!root||ans!=-1)
    return;
    inorder(root->left,k);
    count++;
    if(count==k)
    {
        ans=root->val;
        return;

    }
    inorder(root->right,k);
 }

 int kthSmallest(TreeNode* root, int k) {
    inorder(root,k);
    return ans;
 }
};
