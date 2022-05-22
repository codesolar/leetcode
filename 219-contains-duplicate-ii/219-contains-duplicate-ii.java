class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        Map<Integer,Integer> mp=new HashMap<Integer,Integer>();
        for(int i=0;i<nums.length;i++){
            if(mp.containsKey(nums[i])==false){
                mp.put(nums[i],i);
            }
            else{
                if((i-mp.get(nums[i]))<=k){
                    return true;
                }
                else{
                    mp.put(nums[i],i);
                }
            }
        }
        return false;
    }
}