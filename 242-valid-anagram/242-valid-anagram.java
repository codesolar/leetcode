class Solution {
    public boolean isAnagram(String s, String t) {
         int a[]=new int[26];
        if(s.length()!=t.length()) return false;
        for(int i=0;i<a.length;i++){
            a[i]=0;
        }
        for(int i=0;i<t.length();i++){
            a[t.charAt(i)-'a']++;
        }
        for(int i=0;i<s.length();i++){
            a[s.charAt(i)-'a']--;
            if(a[s.charAt(i)-'a']==-1){
                return false;
            }
        }
        return true;
    }
}