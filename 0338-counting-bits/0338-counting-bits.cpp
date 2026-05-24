class Solution {
public:
    string decimal_to_binary(int n){
        string res="";
        while(n>0){
            res+=n%2+'0';
            n/=2;
        }
        return res;
    }

    int  count_bits(string s){
         int count=0;
         for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                count++;
            }

         }
         return count;
    }
    vector<int> countBits(int n) {
        vector<int>res;
        for(int i=0;i<=n;i++){
            string ans=decimal_to_binary(i);
            int num=count_bits(ans);
            res.push_back(num);
        }
        return res;

        
    }
};