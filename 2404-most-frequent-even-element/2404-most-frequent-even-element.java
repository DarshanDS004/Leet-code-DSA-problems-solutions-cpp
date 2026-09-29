class Solution {
    public int mostFrequentEven(int[] nums) {
        int n=nums.length;
        HashMap<Integer,Integer>mp= new HashMap<>();

        for(int i=0;i<n;i++){
            if(nums[i]%2==0)
            mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);

        }
        int max_freq=0;
        int small_ele=-1;

        for(Map.Entry<Integer,Integer> k:mp.entrySet()){

            int key=k.getKey();
            int val=k.getValue();

            if(val>max_freq){
                max_freq=val;
                small_ele=key;
            }
            else if(val==max_freq){
                if(key<small_ele){
                    small_ele=key;
                }
                
            }

        }
        return small_ele;
        
    }
}