class Solution {
    public int findDuplicate(int[] nums) {
        int sum=0;
        for(int i=0;i<nums.length;i++){
            if(nums[Math.abs(nums[i])]<0){
                sum=Math.abs(nums[i]);
                break;
            }
            nums[Math.abs(nums[i])]=-nums[Math.abs(nums[i])];
        }
        for(int i=0;i<nums.length;i++){
            nums[Math.abs(nums[i])]=-nums[Math.abs(nums[i])];
        }
        return sum;
    }
}