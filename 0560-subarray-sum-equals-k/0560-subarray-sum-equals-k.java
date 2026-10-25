class Solution {
    public int subarraySum(int[] nums, int k) {
        int sum=0;
        int count=0;

        Map<Integer,Integer>mp=new HashMap<>();

        for (int i:nums){
            sum+=i;

            if(sum==k)
            count++;

            if(mp.containsKey(sum-k)){
                count+=mp.get(sum-k);
            }

            mp.put(sum,mp.getOrDefault(sum,0)+1);

        }

        return count;
        
    }
}