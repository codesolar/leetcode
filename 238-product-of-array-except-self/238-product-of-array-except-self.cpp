class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count=0,p=1;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            } 
            else p=p*nums[i];
            
        }
        if(count>1) {
            for(int i=0;i<nums.size();i++){
                v.push_back(0);
            }
        }
        else if(count==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0) v.push_back(0);
                else v.push_back(p);
            }
        }
        else{
            for(int i=0;i<nums.size();i++){
                v.push_back(p/nums[i]);
            }
        }
        return v;
    }
};