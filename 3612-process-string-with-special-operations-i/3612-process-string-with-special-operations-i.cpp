class Solution {
public:

  void reverse(string &s){
    int low=0,high=s.size()-1;

    while(low<=high){
        swap(s[low],s[high]);
        low++;
        high--;

    }
  }
    string processStr(string s) {

        string res="";

        for(int i=0;i<s.size();i++){
            if(islower(s[i])){
                res+=s[i];
            }
            else if(s[i]=='*' && !res.empty()){
               res.pop_back();
            }
            else if(s[i]=='#'){
                res+=res;

            }
            else{
               reverse(res);
            }
        }
        return res;
        
    }
};