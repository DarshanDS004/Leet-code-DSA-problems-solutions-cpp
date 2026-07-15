class Solution {
public:

    int gcd(int a, int b){
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
        
    }
    int gcdOfOddEvenSums(int n) {
        int odd=0;
        int even=0;
        for(int i=0;i<n;i++){
            odd+=2*i+1;
            even+=2*i+2;
        }
        int ans= gcd(odd,even);
        return ans;
        
    }
};