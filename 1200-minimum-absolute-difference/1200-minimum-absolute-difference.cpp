class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> v;
        sort(arr.begin(),arr.end());
        int diff=20000000;
        for(int i=0;i<arr.size()-1;i++){
            int tempo_diff=arr[i+1]-arr[i];
            if(tempo_diff<diff){
                diff=tempo_diff;
            }
        }
        for(int i=0;i<arr.size()-1;i++){
            vector<int> v1;
            if(arr[i+1]-arr[i]==diff){
                v1.push_back(arr[i]);
                v1.push_back(arr[i+1]);
                v.push_back(v1);
            }
        }
        return v;
    }
};