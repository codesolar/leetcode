class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int,int> mp;
        mp.insert({0,1});
        mp.insert({1,1});
        for(int i=2;i<=n;i++){
            mp.insert({i,mp[i-2]+mp[i-1]});
        }
       return mp[n]; 
    }
};