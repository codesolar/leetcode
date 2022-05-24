class Solution {
public int subarraySum(int[] nums, int k) {
    
    
    //do again
    
    
    Map<Integer,Integer> mymap = new HashMap<>();
    int sum=0;
    mymap.put(sum,1); // frequency of 0 is 1
    int maxsubarr = 0;
    for(int i=0;i<nums.length;i++){
        sum += nums[i];
        if(mymap.containsKey(sum-k))
            maxsubarr += mymap.get(sum-k);
        if(mymap.containsKey(sum)){
            int fre = mymap.get(sum)+1;
            mymap.put(sum,fre);
        }else{
            mymap.put(sum,1);
        }
    }
    return maxsubarr;
}
}