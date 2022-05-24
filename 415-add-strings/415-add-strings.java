class Solution {
    public String addStrings(String num1, String num2) {
        //try again with string not stringbuilder
        int len1=num1.length();
        int len2=num2.length();
        int i=len1-1,j=len2-1,c=0,sum=0;
        String str=new String();
        while(i>=0 && j>=0){
                               sum=Integer.parseInt(String.valueOf(num1.charAt(i)))+Integer.parseInt(String.valueOf(num2.charAt(j)))+c;
            c=sum/10;
            sum=sum%10;
            str=Integer.toString(sum)+str;
            i--;
            j--;
        }
        if(i<0 && j>=0){
            while(j>=0 && c>0){
                sum=c+Integer.parseInt(String.valueOf(num2.charAt(j)));
                c=sum/10;
                sum=sum%10;
                str=Integer.toString(sum)+str;
                j--;
            }
            if(j<0 && c>0){
                str="1"+str;
            }
            else if(j>=0 && c<=0){
                str=num2.substring(0,j+1)+str;
            }
        }
        else if(i>=0 && j<0){
            while(i>=0 && c>0){
                sum=c+Integer.parseInt(String.valueOf(num1.charAt(i)));
                c=sum/10;
                sum=sum%10;
                str=Integer.toString(sum)+str;
                i--;
            }
            if(i<0 && c>0){
                str="1"+str;
            }
            else if(i>=0 && c<=0){
                str=num1.substring(0,i+1)+str;
            }
        }
        else if(i<0 && j<0 && c>0){
            str="1"+str;
        }
        return str;
    }
}