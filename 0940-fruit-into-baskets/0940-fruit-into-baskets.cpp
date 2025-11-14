class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int left=0,right=0,max_len=0;
        unordered_map<int,int>mp;
        while(right<n)
        {
            mp[fruits[right]]++;
            while(mp.size()>2)
            {
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0)
                {
                mp.erase(fruits[left]);
                }
                left++;
            }

            if(mp.size()<=2)
            {
                max_len=max(max_len,right-left+1);
                right++;
            }
        }
        return max_len;

        
        
    }
};