class Solution {
public:
    int binary(vector<int>& nums,int l,int r){
        if(l<=r){
            int mid=l+(r-l)/2;
            bool flag=false;
            if(not((mid+1<=r && nums[mid+1]==nums[mid])||(mid-1>=l && nums[mid-1]==nums[mid]))){
                return nums[mid];
            }
            else{
                if(mid+1<=r && nums[mid+1]==nums[mid] && mid%2==0){
                    return binary(nums,mid+2,r);
                }
                else if(mid-1>=l && nums[mid-1]==nums[mid] && (mid-1)%2==0){
                    return binary(nums,mid+1,r);
                }
                else if(mid+1<=r && nums[mid+1]==nums[mid] && mid%2==1){
                     return binary(nums,l,mid-1);
                }
                else if(mid-1>=l && nums[mid-1]==nums[mid] && (mid-1)%2==1){
                     return binary(nums,l,mid-2);
                }
            }
        }
        return -1;
    }
    int singleNonDuplicate(vector<int>& nums) {
        return binary(nums,0,nums.size()-1);
    }
    
};