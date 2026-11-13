class Solution {
    public String defangIPaddr(String address) {
        int n=address.length();
        String res="";
        for(int i=0;i<n;i++){
            if(address.charAt(i)=='.'){
                res+="[.]";
            }
            else{
                res+=address.charAt(i);
            }
        }
        return res;
        
    }
}