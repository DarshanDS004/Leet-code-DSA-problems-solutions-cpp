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
*/


class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        if (!root) return false;
        
        queue<pair<TreeNode*, TreeNode*>> q; // node, parent
        q.push({root, nullptr});

        while (!q.empty()) {
            int size = q.size();
            TreeNode* x_parent = nullptr;
            TreeNode* y_parent = nullptr;

            for (int i = 0; i < size; ++i) {
                auto [node, parent] = q.front();
                q.pop();

                if (node->val == x) x_parent = parent;
                if (node->val == y) y_parent = parent;

                if (node->left) q.push({node->left, node});
                if (node->right) q.push({node->right, node});
            }

            if (x_parent && y_parent) {
                return x_parent != y_parent; // Same level, different parents
            } else if (x_parent || y_parent) {
                return false; // Found only one in this level
            }
        }

        return false; // Not found
    }
};
