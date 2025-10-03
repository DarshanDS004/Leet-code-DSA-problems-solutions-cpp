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
    void inorder(TreeNode*root,vector<int>&nums)
    {
        if(root==nullptr)
        return;
        inorder(root->left,nums);
        nums.push_back(root->val);
        inorder(root->right,nums);
    }

    TreeNode*construct(vector<int>&nums,int left,int right)
    {
        if(left>right)
        return nullptr;
        int mid=(left+right)/2;
        TreeNode*curr=new TreeNode(nums[mid]);
        curr->left=  construct(nums,left,mid-1);
        curr->right=construct(nums,mid+1,right);
        return curr;

    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        vector<int>res;
        inorder(root,res);
        res.push_back(val);
        sort(res.begin(),res.end());
        return construct(res,0,res.size()-1);

        
    }
};