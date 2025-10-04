/*
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int max_water=0;
        for(int i=0;i<n;i++)
        {
             for(int j=i+1;j<n;j++)
             {
                int width=j-i;
                int h=min(height[i],height[j]);
                int area=width*h;
                max_water=max(max_water,area);

             }
            // return max_area;
        }
         return max_water;
     
    }
};
*/


class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int max_water=0;
        int left=0,right=n-1;
        while(left<right)
        {  

            int width=right-left;
            int h=min(height[left],height[right]);
            int area=h*width;
            max_water=max(max_water,area);
            if(height[left]<height[right])
            {
                left++;
                
            }
            else
            {
                right--;
            }
        }
         return max_water;
     
    }
};