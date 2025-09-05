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
/*
bool search(vector<int>&level,int x,int y)
{
    bool xfound=false;
    bool yfound=false;
    for(int i=0;i<level.size();i++ )
    {
        if(level[i]==x)
        {
            xfound=true;

        }
        else if(level[i]==y){
            yfound=true;
        }
    }
    return (xfound&&yfound);
}
*/

    bool isCousins(TreeNode* root, int x, int y) {
        if(root==nullptr)
        return false;
      
        queue<TreeNode*>q;
        TreeNode*temp=root;
        q.push(root);
        while(!q.empty())
        { 
            bool xfound=false;
            bool yfound=false;
            int n=q.size();
            
            for(int i=0;i<n;i++)
            {
                TreeNode*curr=q.front();
                q.pop();
                if(curr->left&&curr->right)
                {
                    int left=curr->left->val;
                    int right=curr->right->val;
                    if(left==x && right==y||right==x && left==y)
                    return false;
                }
                if(curr->val==x)
                xfound=true;
                if(curr->val==y)
                yfound=true;
             
                if(curr->left)
                q.push(curr->left);
                if(curr->right)
                q.push(curr->right);

            }
            if(xfound&&yfound)
            return true;
            if(xfound||yfound)
            return false;
           
        }
        return false;
       

        
    }
};