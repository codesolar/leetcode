class Solution {
    Set<Integer> set;
    public boolean isHappy(int n) {
        set=new HashSet<Integer>();
        return isH(n);
    }
    public boolean isH(int n){
        //System.out.println(n);
        if(n==1) return true;
        else if(set.contains(n)==false){
            set.add(n);
        }
        else{
            return false;
        }
        int p=n,s=0,r=0;
        while(p!=0){
            r=p%10;
            s=s+(int)Math.pow(r,2);
            p=p/10;
        }   
        return isH(s);
    }
}