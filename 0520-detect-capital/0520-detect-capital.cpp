class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();

        int capital_count=0;
        for(int i=0;i<n;i++){
            if(word[i]>='A' && word[i]<='Z'){
                capital_count++;
            }
           
        }

        if(capital_count==n)
        return true;

        if(capital_count==0){
            return true;

        }

        if(capital_count==1  && word[0]>='A' && word[0]<='Z')
        return true;

        return false;
    }
};