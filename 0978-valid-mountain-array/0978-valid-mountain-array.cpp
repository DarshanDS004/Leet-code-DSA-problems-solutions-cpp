

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if (n < 3) return false;

        for (int i = 1; i < n - 1; i++) {
            bool increasing = true;
            bool decreasing = true;

            // Check increasing before peak
            for (int j = 0; j < i; j++) {
                if (arr[j] >= arr[j + 1]) {
                    increasing = false;
                    break;
                }
            }

            // Check decreasing after peak
            for (int j = i; j< n - 1; j++) {
                if (arr[j] <= arr[j + 1]) {
                    decreasing = false;
                    break;
                }
            }

            if (increasing && decreasing)
             return true;
        }

        return false;
    }
};


/*
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<3)
        return false;
        int i=0;
        while(+1<n && arr[i]<arr[i+1])
        {
            i++;
        }
        if(i==0||i==n-1)
        return false;
        while(i+1<n && arr[i]>arr[i+1])
        {
            i++;
        }
        return i==n-1;

        
    }
};
*/