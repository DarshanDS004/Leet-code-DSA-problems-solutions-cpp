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
string preorder(TreeNode*root)
{
      string res="";
    if(root==nullptr)
    return "#";
  
    res="@"+to_string(root->val);
    string left= preorder(root->left);
    string right=preorder(root->right);
    res+=left;
    res+=right;
    return res;
}
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        string main=preorder(root);
        string sub=preorder(subRoot);
        return main.find(sub)!=string::npos;
        
    }
};