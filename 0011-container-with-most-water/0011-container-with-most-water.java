
/*
class Solution {
    public int maxArea(int[] height) {
        int n=height.length;

        int max_area=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int width=j-i;
                int min_height=Math.min(height[i],height[j]);
                int area=width*min_height;
                max_area=Math.max(area,max_area);
            }
        }
        return max_area;
    }
}
*/


class Solution {
    public int maxArea(int[] height) {
        int n=height.length;

        int max_area=0;
        int left=0,right=n-1;
        while(left<=right){
            int width=right-left;
            int min_height=Math.min(height[left],height[right]);
            int area=min_height*width;
            max_area=Math.max(area,max_area);
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