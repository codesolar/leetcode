class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            mp.insert({nums[i],i});
        }
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i])!=mp.end() && i!=mp.find(target-nums[i])->second){
                v.push_back(i);
                v.push_back(mp.find(target-nums[i])->second);
                break;
            }
        }
        return v;
    }
};