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
    if(root==nullptr)
    return;
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
  }
    int findSecondMinimumValue(TreeNode* root) {
        int min=INT_MAX,sec_min=INT_MAX;
        vector<int>ans;
        inorder(root,ans);
        for(int i=0;i<ans.size();i++)
        {
             if(ans[i]<min)
             {
                sec_min=min;
                min=ans[i];
             }
             else if(ans[i]<sec_min&&ans[i]>min)
             {
                sec_min=ans[i];
             }
        }
        if(sec_min==INT_MAX)
        return -1;
       return sec_min;

        
    }
};

*/

class Solution {
public:
    void traverse(TreeNode* root, set<int>& uniqueVals) {
        if (!root) return;
        uniqueVals.insert(root->val);
        traverse(root->left, uniqueVals);
        traverse(root->right, uniqueVals);
    }

    int findSecondMinimumValue(TreeNode* root) {
        set<int> uniqueVals;
        traverse(root, uniqueVals);

        if (uniqueVals.size() < 2) return -1;

        auto it = uniqueVals.begin();
        ++it;  // move to second smallest value
        return *it;
    }
};
