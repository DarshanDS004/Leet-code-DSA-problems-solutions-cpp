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
    int findPos(vector<int>& in, int val) {
        for (int i = 0; i < in.size(); i++) {
            if (in[i] == val) return i;
        }
        return -1; // should not happen
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if (preorder.empty() || inorder.empty()) return NULL;

        int rootVal = preorder[0];
        TreeNode* root = new TreeNode(rootVal);

        // find root index in inorder
        int pos = findPos(inorder, rootVal);

        // left part of inorder
        vector<int> inLeft(inorder.begin(), inorder.begin() + pos);
        // right part of inorder
        vector<int> inRight(inorder.begin() + pos + 1, inorder.end());

        // left part of preorder (skip root, take size = inLeft.size())
        vector<int> preLeft(preorder.begin() + 1, preorder.begin() + 1 + inLeft.size());
        // right part of preorder (remaining)
        vector<int> preRight(preorder.begin() + 1 + inLeft.size(), preorder.end());

        // recursively build
        root->left = buildTree(preLeft, inLeft);
        root->right = buildTree(preRight, inRight);

        return root;
    }
};
