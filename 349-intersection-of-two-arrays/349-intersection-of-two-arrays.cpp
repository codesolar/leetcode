class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int n1[1000]={0};
        int n2[1000]={0};
        for(int i=0;i<nums1.size();i++){
            n1[nums1[i]]=2;
        }
        for(int i=0;i<nums2.size();i++){
            n2[nums2[i]]=-1;
        }
        for(int i=0;i<1000;i++){
            n1[i]=n1[i]+n2[i];
        }
        for(int i=0;i<1000;i++){
            if(n1[i]==1) v.push_back(i);
        }
        return v;
    }
};