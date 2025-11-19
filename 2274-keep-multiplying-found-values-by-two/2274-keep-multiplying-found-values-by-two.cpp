/*
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
      
      int val=original;
      sort(nums.begin(),nums.end());
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
         if(nums[i]==val)
          {
            val*=2;
          }
       }
       return val;
        
    }
};

*/
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n=nums.size();
        int val=original;
        
        unordered_set<int>st( nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(st.find(val)!=st.end()){
                val*=2;
            }
            st.insert(nums[i]);
        }
      return val;

}
};
      