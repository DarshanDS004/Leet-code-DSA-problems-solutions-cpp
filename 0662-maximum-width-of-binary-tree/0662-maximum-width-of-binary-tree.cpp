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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==nullptr)
        return 0;
        long long ans=0;
        queue<pair<TreeNode*,long long>>q;
        q.push({root,0});
        while(!q.empty())
        {
            int n=q.size();
            long long min=q.front().second;
              long long first,last;
            for(int i=0;i<n;i++)
            {
               // int first,last;
                TreeNode*curr=q.front().first;
                long long  curr_index=q.front().second-min;
                q.pop();
                if(i==0)
                first=curr_index;
                if(i==n-1)
                last=curr_index;
                if(curr->left)
                q.push({curr->left,curr_index*2+1});
                 if(curr->right)
                q.push({curr->right,curr_index*2+2});

            }
            ans=max(ans,last-first+1);
        }
        return ans;

        
    }
};