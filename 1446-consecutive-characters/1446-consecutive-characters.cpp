class Solution {
public:
    int maxPower(string s) {
        int n=s.size();
        if(n<=1)
        return n;
        char prev=s[0];
        int count=1,max_count=0;
        for(int i=1;i<n;i++){
           if(s[i]==prev)
           count++;
            else{
              prev=s[i];
              count=1;
           }
           max_count=max(max_count,count);
           
        }
        return max_count;
        
    }
};