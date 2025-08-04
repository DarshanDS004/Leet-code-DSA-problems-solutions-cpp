//BRUTE FORCE TLE 
/*
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
         int maxlen=0;
        for(int i=0;i<n;i++)
        {
           
            set<int>st;
            for(int j=i;j<n;j++)
            {
                st.insert(fruits[j]);
                if(st.size()<=2)
                {
                    maxlen=max(maxlen,j-i+1);
                }
                else
                break;


            }
        }
        return maxlen;
        
        
    }
};

*/

/*

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int maxlen=0;
        int left=0;
        unordered_map<int,int>mp;
        for(int right=0;right<n;right++)
        {
            mp[fruits[right]]++;
            while(mp.size()>2)
            {
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0)
                mp.erase(fruits[left]);
                left++;
                
            }
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};

*/

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int maxlen=0;
        int left=0;
        unordered_map<int,int>mp;
        for(int right=0;right<n;right++)
        {
            mp[fruits[right]]++;
            if(mp.size()>2)
            {
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0)
                mp.erase(fruits[left]);
                left++;
                
            }
            if(mp.size()<=2)
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};