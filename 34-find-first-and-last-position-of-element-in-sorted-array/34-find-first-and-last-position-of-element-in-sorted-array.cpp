class Solution {
public:
     int binary_search_first(vector<int> v,int l,int r,int target){
    if(l<=r){
        int mid=l+(r-l)/2;
        if(v[mid]==target){
            if(l==mid){
                return mid;
            }
            else{
                if(v[mid-1]<v[mid]){
                    return mid;
                }
                else{
                    //if v[mid-1]==v[mid]
                    return binary_search_first(v,l,mid-1,target);
                }
            }
        }
        if(v[mid]>target){
            return binary_search_first(v,l,mid-1,target);
        }
        if(v[mid]<target){
            return binary_search_first(v,mid+1,r,target);
        }
       
    }
          return -1;
}
 int binary_search_last(vector<int> v,int l,int r,int target){
    if(l<=r){
        int mid=l+(r-l)/2;
        if(v[mid]==target){
            if(r==mid){
                return mid;
            }
            else{
                if(v[mid+1]>v[mid]){
                    return mid;
                }
                else{
                    //if v[mid-1]==v[mid]
                    return binary_search_last(v,mid+1,r,target);
                }
            }
        }
        if(v[mid]>target){
            return binary_search_last(v,l,mid-1,target);
        }
        if(v[mid]<target){
            return binary_search_last(v,mid+1,r,target);
        }
        
    }
     return -1;
}

    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> v;
        v.push_back(binary_search_first(nums,0,nums.size()-1,target));
        v.push_back(binary_search_last(nums,0,nums.size()-1,target));
        return v;
    }
};