class Solution {

    public void swap(StringBuilder s,int a,int b){
        char temp=s.charAt(a);
        s.setCharAt(a,s.charAt(b));
        s.setCharAt(b,temp);

    }
    public void reverse(StringBuilder s,int l,int r){
        while(l<=r){
            swap(s,l,r);
            l++;
            r--;
        }
        
    }
    public String reverseStr(String s, int k) {
        StringBuilder s1= new StringBuilder(s);
        int n=s1.length();
        int start ,end;
        for(int i=0;i<n;i+=2*k){
            start=i;
            end=Math.min(i+k-1,n-1);
            reverse(s1,start,end);

        }
        return s1.toString();
        
    }
}