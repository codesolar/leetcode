class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,max_count=0;
        for(int i=0;i<nums.size();i++){
            if(i==0 && nums[i]==1){
                count=1;
            }
            else if(i>0 && nums[i]==1){
                count++;
            }
            else if(i>0 && nums[i-1]==1 && nums[i]==0){
                if(max_count<count){
                    max_count=count;
                }
                count=0;
            }
        }
        if(count>max_count)
            max_count=count;
        return max_count;
    }
};