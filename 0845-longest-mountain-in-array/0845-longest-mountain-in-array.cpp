class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        if(n<3)
        return 0;
        int i=1,length=0;
        while(i<n-1){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                int left=i;
                int right=i;
            

            while(left>0 &&arr[left]>arr[left-1])
            left--;
            while(right<n-1 && arr[right]>arr[right+1])
            right++;

            length=max(length,right-left+1);
            i=right;
        }
        else{
            i++;
        }
        
        
    }
    return length;
    }
};

/*
bool is_mountain(vector<int>&arr,int l,int r){
    int i=l;
    while(i<r && arr[i]<arr[i+1])
    i++;

    if(i==1||i==r)
    return false;

    while(i<r &&arr[i]>arr[i+1])
    i++;
    return i==r;
}

class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        if(n<3)
        return 0;
        int length=0;
        for(int i=0;i<n;i++){
            for(int j=i+2;j<n;j++){
                if(is_mountain(arr,i,j)){
                    length=max(length,j-i+1);
                }
            }
        }
        return length;
    }
};
*/