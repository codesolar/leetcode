class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int s:nums){
            if(mp.find(s)==mp.end()){
                mp.insert({s,1});
            }
            else return true;
        }
        return false;
    }
};