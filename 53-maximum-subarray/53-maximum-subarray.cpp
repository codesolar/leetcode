class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxsum=INT_MIN;
        int i=0;
        for(int j=0;j<nums.size();j++){
            sum+=nums[j];
            if(sum>maxsum){
                maxsum=sum;
            }
            if(sum<0){
                sum=0;
                i=j+1;
            }
        }
        return maxsum;
    }
};