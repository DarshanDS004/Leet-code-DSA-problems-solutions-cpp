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
    int maxDepth(TreeNode* root) {
      if(root==nullptr)
      return 0;
      int left_height=maxDepth(root->left);
      int right_height=maxDepth(root->right);
      return 1+max(left_height,right_height);

        
    }
};

*/

class Solution {
public:
    int maxDepth(TreeNode* root) {
      if(root==nullptr)
      return 0;
      stack<pair<TreeNode*,int>>st;
      st.push({root,1});
      int ans=0;
      while(!st.empty())
      {
          auto [node ,depth]=st.top();
          st.pop();

          ans=max(ans,depth);
          if(node->left)
          st.push({node->left,depth+1});
          if(node->right)
          {
            st.push({node->right,depth+1});
          } 
        
      }
      return ans;
    }
};