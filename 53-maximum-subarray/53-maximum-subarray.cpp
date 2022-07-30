class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxsum=INT_MIN;
        int i=0;
        for(int j=0;j<nums.size();j++){
            sum+=nums[j];
            if(sum<nums[j]){
                i=j;
                sum=nums[j];
                
            }
            else if(sum<0 and sum<maxsum){
                i=j+1;
                sum=0;
                continue;
            }
            if(sum>maxsum){
                maxsum=sum;
            }
            
        }
        return maxsum;
    }
};