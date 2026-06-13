
/*

class Solution {
public:
vector<int>prefix_max(vector<int>&arr){
    int n=arr.size();
    vector<int>res(n);
    res[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        res[i]=max(res[i-1],arr[i]);

    }
    return res;
}

vector<int>suffix_max(vector<int>&arr){
    int n=arr.size();
    vector<int>res(n);
    res[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        res[i]=max(res[i+1],arr[i]);

    }
    return res;
}
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>left=prefix_max(height);
        vector<int>right=suffix_max(height);
        int total=0;
        for(int i=0;i<n;i++){
            total+=min(left[i],right[i])-height[i];
        }
        return total;
        
    }
};

*/



class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left_max=0;
        int right_max=0;
        int total=0;
          int left=0,right=n-1;

          while(left<right){
              if(height[left]<height[right]){
                if(left_max>height[left]){
                    total+=left_max-height[left];
                }
                else{
                    left_max=height[left];
                    
                }
                left++;
             }
              else{
                if(right_max>height[right]){
                    total+=right_max-height[right];
                }
                else{
                    right_max=height[right];
                }
                right--;
              }
          }
          return total;
        
    }
};


