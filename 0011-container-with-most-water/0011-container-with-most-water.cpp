
/*
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int max_water=0;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int width=j-i;
                int min_height=min(height[i],height[j]);
                max_water=max(max_water,min_height*width);
            }
        }
        return max_water;
        
    }
};

*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0,right=n-1;
         int max_area=0;
        while(left<=right){
            int width=right-left;
            int min_height=min(height[left],height[right]);
            max_area=max(max_area,min_height*width);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }

        }
        return max_area;
    }
};
