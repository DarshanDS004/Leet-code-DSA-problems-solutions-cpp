
/*
class Solution {
public:
    bool check_odd(vector<int>& arr, int x, int y, int k) {
        int count = 0;
        for (int i = x; i <= y; i++) {
            if (arr[i] % 2 == 1) {
                count++;
            }
        }
        return count == k;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (check_odd(nums, i, j, k)) {
                    count++;
                }
            }
        }
        return count;
    }
};
*/
/*
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            int oddCount = 0;
            for (int j = i; j < n; j++) {
                if (nums[j] % 2 == 1) {
                    oddCount++;
                }
                if (oddCount == k) {
                    count++;
                }
            }
        }
        return count;
    }
};
*/


class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int sum=0,count=0;
        unordered_map<int,int>freq;
        freq[0]=1;
        for(int i=0;i<n;i++)
        {
            sum+=(nums[i]%2);
            if(freq.find(sum-k)!=freq.end())
            {
                count+=freq[sum-k];

            }
            freq[sum]++;
        }
        return count;
    }
};