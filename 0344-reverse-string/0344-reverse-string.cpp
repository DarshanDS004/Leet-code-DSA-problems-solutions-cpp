class Solution {
public:
    void reverse_str(vector<char>&s ,int left, int right){
        if(left>right)
        return;
       
         swap(s[left],s[right]);

          reverse_str(s,left+1,right-1);
    }
    void reverseString(vector<char>& s) {
        reverse_str(s,0,s.size()-1);
        
    }
};