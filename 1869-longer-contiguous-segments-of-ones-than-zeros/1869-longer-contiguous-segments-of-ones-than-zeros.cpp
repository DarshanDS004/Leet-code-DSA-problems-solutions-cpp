class Solution {
public:
    bool checkZeroOnes(string s) {
        int n=s.size();
        if(n==0)
        return false;
        int cnt1=1,cnt2=1;
        int max_count1=0,max_count2=0;
        for(int i=0;i<n;i++){

            if(s[i]=='0'){

                if(i>0 &&s[i]==s[i-1]){
                    cnt1++;
                }
                else{
                    cnt1=1;
                }
                max_count1=max(max_count1,cnt1);
            }
            else{

               if(i>0 &&s[i]==s[i-1]){
                    cnt2++;
                }
                else{
                    cnt2=1;
                }
                max_count2=max(max_count2,cnt2);
             }

            }

            if(max_count2>max_count1)
            return true;
            else
            return false;
           
        }

        
    
};