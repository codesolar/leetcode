class Solution {
public:
    unordered_map<char, int> map;
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        if(s.length()==0) return 0;
        int count=0,max_count=0;
        while(r<s.length()){
            if(map.find(s[r])==map.end()){
                map.insert({s[r],r});
            
                
                cout<<r<<endl;
            }
            else{
                if(l<=map[s[r]]){
                    l=map[s[r]]+1;
                    
                }
                map[s[r]]=r;
            }
            count=r-l+1;
            if(max_count<count){
                    max_count=count;
            }
            r++;
        }
        return max_count;
    }
};