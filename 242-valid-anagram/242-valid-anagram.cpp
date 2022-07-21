class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[26]={0};
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++){
            a[s.at(i)-'a']++;
        }
        for(int i=0;i<t.length();i++){
            a[t.at(i)-'a']--;
            if(a[t.at(i)-'a']==-1)
                return false;
        }
        return true;
    }
    
};