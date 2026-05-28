class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.size();
        map<char,int>firstupper;
        map<char,int>lastlower;
        for(int i=0;i<n;i++){
            if(word[i]>='A' && word[i]<='Z'){
                if(firstupper.count(word[i])==0)
                firstupper[word[i]]=i;
            }
            else if(word[i]>='a'  && word[i]<='z'){
                lastlower[word[i]]=i;
            }
        }

        int count=0;

        for(auto [key,val]:firstupper){
            
            char lower=key+32;
            if(lastlower.count(lower) && val>lastlower[lower] ){

                count++;

            }
        }
        return count;
        
    }
};