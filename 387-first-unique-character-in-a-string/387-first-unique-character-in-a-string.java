class Solution {
    public int firstUniqChar(String s) {
        int a[]=new int[26];
        int f=-1;
        for(int i=0;i<a.length;i++){
            a[i]=-1;
        }
        for(int i=0;i<s.length();i++){
            a[s.charAt(i)-'a']++;
        }
        for(int i=0;i<s.length();i++){
            if(a[s.charAt(i)-'a']==0){
                f=i;
                break;
            }
        }
        return f;
    }
}