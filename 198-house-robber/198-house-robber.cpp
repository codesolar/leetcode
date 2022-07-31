class Solution {
public:
    unordered_map<int,int> map;
    int moneyRob(vector<int>& nums,int n){
        cout<<"n="<<n<<endl;
        if(map.find(n)!=map.end()){
            return map[n];
        }
        if(n==0){
            if(map.find(n)==map.end())
                map.insert({0,0});
            return map[n];
        }
        if(n==1){
            if(map.find(n)==map.end())
            map.insert({1,nums[n-1]});
            return map[n];
        }
        if(n==2){
            if(map.find(n)==map.end())
            map.insert({2,max(nums[n-2],nums[n-1])});
            return map[n];
        }
        
        int w1=nums[n-1]+moneyRob(nums,n-2);
        int w2=nums[n-2]+moneyRob(nums,n-3);
        map.insert({n,max(w1,w2)});
        return map[n];
        
    }
    int rob(vector<int>& nums) {
        return moneyRob(nums,nums.size());
    }
};