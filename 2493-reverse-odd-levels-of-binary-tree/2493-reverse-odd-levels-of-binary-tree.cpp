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
  
  void swap_nodes(vector<TreeNode*>&res)
  {
    int n=res.size();
    int left=0,right=n-1;
    while(left<right)
    {
        swap(res[left]->val,res[right]->val);
        left++;
        right--;
    }
  }


    TreeNode* reverseOddLevels(TreeNode* root) {
        if(root==nullptr)
        return root;
        queue<TreeNode*>q;
        q.push(root);
         TreeNode*curr;
         int level_count=0;
        while(!q.empty())
        {
            int n=q.size();
            vector<TreeNode*>nodes;
            for(int i=1;i<=n;i++)
            {
                   curr=q.front();
                   q.pop();
                   nodes.push_back(curr);
                    if(curr->left)
                    q.push(curr->left);
                     if(curr->right)
                    q.push(curr->right);
                  

            }
            
            if(level_count%2==1)
            {
              swap_nodes(nodes);
            }
             level_count++;
           
        }
            
    
        return root;
        
    }
};