class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        
        int s=0,e=nums.size()-1;
        
        for(int i=0;i<nums.size()-2;i++){
            s=i+1;
            e=nums.size()-1;
            if(i==0 || (i>0 and nums[i]!= nums[i-1])){
            while(s<e){
                if(nums[i]+nums[e]+nums[s]>0){
                    e--;
                }
                else if(nums[i]+nums[e]+nums[s]<0){
                    s++;
                }
                else{
                    vector<int> v1;
                    v1.push_back(nums[i]);
                    v1.push_back(nums[s]);
                    v1.push_back(nums[e]);
                    v.push_back(v1);
                    while(s<e and nums[s]== nums[s+1]) s++;
                    while(s<e and nums[e] == nums[e-1]) e--; 
                    
                    s++; 
                    e--;
                }
            }
        }
        }
        return v;
    }
};