class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.size();
        set<char>st;
        for(int i=0;i<n;i++){
            if(word[i]>='a'&& word[i]<='z'){
                st.insert(word[i]);
            }
        }

        int count=0;
        
        for(int i=0;i<n;i++){
            if(word[i]>='A' && word[i]<='Z'){
                char ch=word[i]+32;
                if(st.count(ch)){
                    count++;
                    st.erase(ch);
                }
            }
        }
            
            return count;
        }
        
    
};