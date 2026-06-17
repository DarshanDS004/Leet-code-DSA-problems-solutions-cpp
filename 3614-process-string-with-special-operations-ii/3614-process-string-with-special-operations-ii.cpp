
/*
class Solution {
public:

    void reverse(string &s ){
        int l=0,r=s.size()-1;

        while(l<r){
            swap(s[l++],s[r--]);
        }
    }
    char processStr(string s, long long k) {
        int n=s.size();
        string res="";
       for(int i=0;i<n;i++){
        
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

       if(k<res.size()){
        return res[k];
       }
       else{
        return '.';
       }

        
    }
};

*/
class Solution {
public:
char processStr(string s, long long k) {
     int n=s.size();
      long long len=0;

      for(char c :s){
        
        if(c=='*'){
            len=max(0LL,len-1);
        }
        else if(c=='#'){
            len*=2;
        }
        else if(c!='%'){
            len++;
        }

      }

      if(k>=len)
      return '.';

      for(int i=n-1;i>=0;i--){
        char ch=s[i];
       
       if( ch=='*'){
          len++;
       }
       else if(ch=='#'){
        len/=2;
        k%=len;
       }

       else if(ch=='%'){
        k=len-1-k;
       }
       else{
        len--;

        if(len==k){
            return ch;
        }
       }

 }
 return '.';
}
};
       