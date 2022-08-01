class Solution {
public:
    unordered_map<int,int> map;
    int moneyRob(vector<int>& nums,int n){
     //   cout<<"n="<<n<<endl;
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
        if(nums.size()==1){
            return nums[0];
        }
        vector<int> v1;
        for(int i=0;i<nums.size()-1;i++){
            v1.push_back(nums[i]);
        }
        int w1=moneyRob(v1,v1.size());
        vector<int> v2;
        for(int i=1;i<nums.size();i++){
            v2.push_back(nums[i]);
        }
        map.clear();
        int w2=moneyRob(v2,v2.size());
        cout<<w2;
        return max(w1,w2);
    }
};

