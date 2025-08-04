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


 // BRUTE FORCE 
/*
class Solution {
public:
   
  int height(TreeNode*root)
  {
    if(root==nullptr)
    return 0;
    int m=height(root->left);
    int n=height(root->right);
    
    return max(m,n)+1;
  }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr)
        return 0;
        int left=height(root->left);
        int right=height(root->right);

        int Diameter=left+right;
        int leftDia= diameterOfBinaryTree(root->left);
        int rightDia= diameterOfBinaryTree(root->right);
        return max({Diameter,leftDia,rightDia});

        
    }
};
*/

   // OPTIMAL 
   /*
    class Solution {
public:
    int maxDiameter=0;
  int height(TreeNode*root)
  {
    if(root==nullptr)
    return 0;
    int m=height(root->left);
    int n=height(root->right);
     maxDiameter = max(maxDiameter, m + n);
    return max(m,n)+1;
  }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr)
        return 0;
        height(root);
        return maxDiameter;

        
    }
};
*/


//  BEST 


class Solution {
public:
   unordered_map<TreeNode*,int>mp;
  int height(TreeNode*root)
  {
    if(root==nullptr)
    return 0;
    if(mp.count(root))
    return mp[root];
    int m=height(root->left);
    int n=height(root->right);
    int h= max(m,n)+1;
    mp[root]=h;
    return h;
  }
  


    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr)
        return 0;
        int left=height(root->left);
        int right=height(root->right);

        int Diameter=left+right;
        int leftDia= diameterOfBinaryTree(root->left);
        int rightDia= diameterOfBinaryTree(root->right);
        return max({Diameter,leftDia,rightDia});

        
    }
};
