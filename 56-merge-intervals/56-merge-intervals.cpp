class Solution {
public:
    static bool compareInterval(vector<int> v1, vector<int> v2){
        return v1[0]<v2[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        
        sort(intervals.begin(),intervals.end(),compareInterval);
        
        // for(int i=0;i<intervals.size();i++){
        //     cout<<intervals[i][0]<<" ";
        //     cout<<intervals[i][1]<<endl;
        // }
        auto itr=intervals.begin();
        int s=intervals[0][0],e=intervals[0][1];
        int i=0,j=1;
        while(j<intervals.size()){
            if(e>=intervals[j][0]){
                
                e=max(intervals[j][1],e);
                j++;
            }
            else{
                vector<int> v;
                v.push_back(intervals[i][0]);
                v.push_back(e);
                res.push_back(v);
                i=j;
                if(i<intervals.size()){
                    e=intervals[i][1];
                }
            }
        }
        vector<int> v1;
        v1.push_back(intervals[i][0]);
        v1.push_back(e);
        res.push_back(v1);
        return res;
    }
};