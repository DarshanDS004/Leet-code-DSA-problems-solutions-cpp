/*

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int max_area=0;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                
                int width=j-i;
                int min_height=min(height[i],height[j]);
                max_area=max(max_area,width*min_height);
            }
        }
        return max_area;
        
    }
};

*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int max_area=0;
        vector<pair<int,int>>arr;
        for(int i=0;i<n;i++){
            arr.push_back({height[i],i});
        }
        sort(arr.begin(),arr.end(),greater<pair<int,int>>());

        int min_index=arr[0].second;
        int max_index=arr[0].second;

        for(int i=0;i<n;i++){
            
            int width=max(abs(arr[i].second-min_index),abs(arr[i].second-max_index));
            int curr_area=width*arr[i].first;
            max_area=max(max_area,curr_area);
            min_index=min(min_index,arr[i].second);
            max_index=max(max_index,arr[i].second);
        }
        return max_area;
    }
};