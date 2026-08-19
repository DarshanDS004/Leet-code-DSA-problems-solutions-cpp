class Solution {
public:
    int mySqrt(int x) {
        int left=0,right=x;
        while(left<=right){
            long long  mid=left+(right-left)/2;
             long long val=mid*mid;
            if(val==x){
                return mid;
            }
            else  if(val<x){
                left=mid+1;
            }
            else{
                 right=mid-1;
            }
        }
        return right;
        
    }
};