class Solution {
    public int longestPalindrome(String s) {
        int a[]=new int[58];
        int e=0,o=0,l=0,no=0;
        boolean flag=false;
        for(int i=0;i<s.length();i++){
            a[s.charAt(i)-'A']++;
        }
        for(int i=0;i<58;i++){
            if(a[i]!=0 && a[i]%2==0){
                e=e+a[i];
            }
            else if(a[i]!=0 && a[i]%2==1){
                if(a[i]==1 && flag==false) {
                    flag=true;
                    o++;
                }
                else if(a[i]>1){
                    no++;
                    o+=a[i];
                }
            }
        }
        if(flag==true) o=o-no;
        else if(no>0) o=o-(no-1);
        return e+o; 
    }
}