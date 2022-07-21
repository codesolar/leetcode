class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> result;
        for(int i=0;i<strs.size();i++){
            string sorted_word=strs[i];
            sort(sorted_word.begin(),sorted_word.end());
            if(mp.find(sorted_word)==mp.end()){
                vector<string> v;
                v.push_back(strs[i]);
                mp.insert({sorted_word,v});
            }
            else{
                mp[sorted_word].push_back(strs[i]);
            }
        }
        for(auto itr:mp){
            result.push_back(itr.second);
        }
        return result;
    }
};