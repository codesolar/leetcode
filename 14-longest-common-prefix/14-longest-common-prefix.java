class Solution {
    public String longestCommonPrefix(String[] strs) {
        String s=strs[0];
        int k=0,l=210;
        if(strs.length==1) l=strs[0].length();
        for(int i=1;i<strs.length;i++){
            k=0;
            for(int j=0;j<Math.min(strs[i].length(),s.length());j++){
                if(strs[i].charAt(j)==s.charAt(j)){
                    k++;
                }
                else{
                    break;
                }
                
            }
            if(k<l) l=k;
        }
        return s.substring(0,l);
}
}