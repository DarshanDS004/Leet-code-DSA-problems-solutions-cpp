class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left=0,right=n-1;
        int total=0;
        int max_left=0,right_max=0;
        while(left<=right){
            if(height[left]<=height[right]){

                if(height[left]>max_left){
                    max_left=height[left];
                }
                else{
                    total+=max_left-height[left];
                }
                left++;
            }

        
          else{

            if(height[left]>height[right]){

                if(height[right]>right_max){
                    right_max=height[right];
                }
                else{
                    total+=right_max-height[right];
                }
                right--;
            }

          }
        }

        return total;
        
    }
};