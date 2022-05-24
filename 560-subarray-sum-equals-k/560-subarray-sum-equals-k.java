//do again

class Solution {
public int subarraySum(int[] nums, int k) {
    Map<Integer,Integer> mp=new HashMap<>();
    int maxsub=0,sum=0;
    for(int i=0;i<nums.length;i++){
        sum=sum+nums[i];
        if(sum==k){
            maxsub++;
        }
        if(mp.containsKey(sum-k)){
            maxsub+=mp.get(sum-k);
        }
        if(!mp.containsKey(sum)){
            mp.put(sum,1);
        }
        else{
            mp.put(sum,mp.get(sum)+1);
        }
    }
    return maxsub;

}
}