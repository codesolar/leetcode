class Solution {
    public int maxSubArray(int[] nums) {
        int maxsum=Integer.MIN_VALUE;
        int sum=0,i=0,j=0;
        while(j<nums.length){
            sum=sum+nums[j];
            if(maxsum<sum) maxsum=sum;
            j++;
            if(sum<0) {
                i=j;
                sum=0;
            }
        }
        return maxsum;
    }
}