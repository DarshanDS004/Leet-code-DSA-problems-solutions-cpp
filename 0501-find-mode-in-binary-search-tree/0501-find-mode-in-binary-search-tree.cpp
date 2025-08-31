/*
class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        if (!root) return {};

        stack<TreeNode*> st;
        st.push(root);
        map<int,int> mp;
        int max_frq = 0;

        while (!st.empty()) {
            TreeNode* curr = st.top();
            st.pop();

            mp[curr->val]++;
            max_frq = max(max_frq, mp[curr->val]);

            if (curr->left)
            st.push(curr->left);
            if (curr->right) 
            st.push(curr->right);
        }

        vector<int> res;
        for (auto &p : mp) {
            if (p.second == max_frq) {
                res.push_back(p.first);
            }
        }
        return res;
    }
};

*/

class Solution {
public:
    vector<int> res;
    int curr_ele;
    int curr_count;
    int max_count;

    void inorder(TreeNode* root) {
        if (!root) return;

        inorder(root->left);

        if (root->val == curr_ele) {
            curr_count++;
        } else {
            curr_ele = root->val;
            curr_count = 1;
        }

        if (curr_count > max_count) {
            res.clear();
            res.push_back(root->val);
            max_count = curr_count;
        } else if (curr_count == max_count) {
            res.push_back(root->val);
        }

        inorder(root->right);
    }

    vector<int> findMode(TreeNode* root) {
        res.clear();
        curr_ele = INT_MIN;
        curr_count = 0;
        max_count = 0;

        inorder(root);
        return res;
    }
};


