#include <climits>
class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        int min_dist = INT_MAX;
        bool found = false;

        for (int i = 0; i < n; i++) {

            vector<int> indices;
            for (int j = i; j < n; j++) {
                if (nums[i] == nums[j]) {
                    indices.push_back(j);
                }
            }

           
            if (indices.size() >= 3) {

             
                for (int k = 0; k + 2 < indices.size(); k++) {
                    int a = indices[k];
                    int b = indices[k + 1];
                    int c = indices[k + 2];

                    int dist = abs(a - b) + abs(b - c) + abs(c - a);

                    min_dist = min(min_dist, dist);
                    found = true;
                }
            }
        }

        return found ? min_dist : -1;
    }
};