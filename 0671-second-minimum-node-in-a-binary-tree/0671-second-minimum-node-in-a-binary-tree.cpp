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


// #include <vector>
// #include <climits>

// class Solution {
// public:
//     void inorder(TreeNode* root, std::vector<int>& vals) {
//         if (!root) return;
//         inorder(root->left, vals);
//         vals.push_back(root->val);
//         inorder(root->right, vals);
//     }

//     int findSecondMinimumValue(TreeNode* root) {
//         std::vector<int> vals;
//         inorder(root, vals);

//         int min_val = INT_MAX;
//         long long sec_min = LLONG_MAX;

//         for (int val : vals) {
//             if (val < min_val) {
//                 sec_min = min_val;
//                 min_val = val;
//             } else if (val > min_val && val < sec_min) {
//                 sec_min = val;
//             }
//         }

//         // If there's no second minimum, return -1
//         return (sec_min == LLONG_MAX) ? -1 : static_cast<int>(sec_min);
//     }
// };
