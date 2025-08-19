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

            if (curr->left) st.push(curr->left);
            if (curr->right) st.push(curr->right);
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
