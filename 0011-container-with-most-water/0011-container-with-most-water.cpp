
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
        vector<pair<int,int>>a;
        for(int i=0;i<n;i++){
            a.push_back({height[i],i});
        }
     sort(a.begin(),a.end(),greater<pair<int,int>>());


     int min_index=a[0].second;
     int max_index=a[0].second;
     
     for(int i=0;i<a.size();i++){
        int max_width=max(abs(a[i].second-max_index),abs(a[i].second-min_index));
        int curr_area= 1LL*a[i].first*max_width;
         max_area=max(max_area,curr_area);

         min_index=min(min_index,a[i].second);
         max_index=max(max_index,a[i].second);
     }
     return max_area;
    }
};