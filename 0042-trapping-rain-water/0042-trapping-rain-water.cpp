class Solution {
public:
vector<int>prefix(vector<int>&arr)
{
    int n=arr.size();
    vector<int>res(n);
    res[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        res[i]=max(res[i-1],arr[i]);
    }
    return res;
}
vector<int>suffix(vector<int>&arr)
{
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
        int total=0;
        int n=height.size();
        vector<int>pre=prefix(height);
        vector<int>suff=suffix(height);

        for(int i=0;i<n;i++)
        {
            int left=pre[i],right=suff[i];
           if(height[i]<left&&height[i]<right)
           {
            total+=min(left,right)-height[i];
           }
        }
        return total;
        
    }
};