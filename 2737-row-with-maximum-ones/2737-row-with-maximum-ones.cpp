/*
class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int max_count = -1;
        int ans = -1;

        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1)
                    count++;
            }
            if (count > max_count) {
                max_count = count;
                ans = i;
            }
        }

        return {ans, max_count};
    }
};
*/

class Solution {
public:
    int lower_bound(vector<int>& arr, int target) {
        int n = arr.size();
        int low = 0, high = n - 1;
        int ans = n;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] >= target) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m = mat[0].size();
        int max_count = 0;
        int index = 0;
        
        for (int i = 0; i < mat.size(); i++) {
            vector<int> row = mat[i];
            sort(row.begin(), row.end());         
            int first_one = lower_bound(row, 1);
            int count = m - first_one;
            if (count > max_count || (count == max_count && i < index)) {
                max_count = count;
                index = i;
            }    
        }

        return {index, max_count};
    }
};

