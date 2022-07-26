class Solution {
public:
    int binary_search(vector<int> &nums,int l,int r,int x){
        if(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==x){
                return mid;
            }
            else if(nums[mid]>x){
                return binary_search(nums,l,mid-1,x);//r
            }
            else{
                return binary_search(nums,mid+1,r,x);//l
            }
        }
        return l;
    }
    int searchInsert(vector<int>& nums, int target) {
        return binary_search(nums,0,nums.size()-1,target);
    }
};