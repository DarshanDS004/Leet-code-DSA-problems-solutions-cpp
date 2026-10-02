class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        int n=arr.length;
        HashMap<Integer,Integer>mp=new HashMap<>();

        for(int i=0;i<n;i++){
            mp.put(arr[i],mp.getOrDefault(arr[i],0)+1);
        }
        
        boolean found=false;
        Set<Integer>st=new HashSet<>();
        for(Map.Entry<Integer,Integer>p :mp.entrySet()){
            int key=p.getKey();
            int val=p.getValue();
            if(st.contains(val)){
                return false;
            }
            st.add(val);
        }
        return true;
    }
}