/*
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        
    }
};

*/

// BRUTE FORCE 
/*
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==target)
                {
                    return true;
                }
            }
        }
        return false;
        
        
    }
};
*/


int binary_search(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

/*
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty())
            return false;
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++) {
            if (matrix[i][0] <= target && matrix[i][m-1] >= target) {
                int res = binary_search(matrix[i], target);
                if (res != -1)
                    return true;
                
            }
        }
        return false;
    }
};
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int low=0,high=m*n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int row=mid/m;
            int col=mid%m;
            if(matrix[row][col]==target)
            {
                return true;
            }
            else if(matrix[row][col]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return false;


        
    }
};