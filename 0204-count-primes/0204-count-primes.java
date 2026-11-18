class Solution {
    public int countPrimes(int n) {
        if(n<2)
        return 0;

        boolean[] res=new boolean[n];
        Arrays.fill(res, true);

        for(int i=2;i*i<n;i++){
            if(res[i]){

                for(int j=i*i;j<n;j+=i){
                    res[j]=false;
                }
            }
        }


        int count=0;
        for(int i=2;i<n;i++){
            if(res[i])
            count++;
        }
        return count;
    }
}