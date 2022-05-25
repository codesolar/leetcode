class Solution {
    public int[] productExceptSelf(int[] nums) {
        int c=0,s=1;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==0) c++;
            else s=s*nums[i];
        }
        int a[]=new int[nums.length];
        for(int i=0;i<nums.length;i++){
            if(nums[i]==0){
                if(c>1){
                    a[i]=0;
                }
                else{
                    a[i]=s;
                }
            }
            else{
                if(c>0)
                    a[i]=0;
                else{
                    a[i]=s/nums[i];
                }
            }
        }
        return a;
    }
}