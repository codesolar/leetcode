class Solution {
    public String addStrings(String num1, String num2) {
        int len1=num1.length();
        int len2=num2.length();
        int i=len1-1,j=len2-1,c=0,sum=0;
        StringBuilder str=new StringBuilder();
        while(i>=0 && j>=0){
                               sum=Integer.parseInt(String.valueOf(num1.charAt(i)))+Integer.parseInt(String.valueOf(num2.charAt(j)))+c;
            c=sum/10;
            sum=sum%10;
            str=(new StringBuilder(Integer.toString(sum))).append(str);
            i--;
            j--;
        }
        if(i<0 && j>=0){
            System.out.println("if"+j);
            while(j>=0 && c>0){
                sum=c+Integer.parseInt(String.valueOf(num2.charAt(j)));
                c=sum/10;
                sum=sum%10;
                str=(new StringBuilder(Integer.toString(sum))).append(str);
                j--;
                   System.out.println("while");
            }
            if(j<0 && c>0){
                str=(new StringBuilder("1")).append(str);
                   System.out.println("2nd if");
            }
            else if(j>=0 && c<=0){
                str=(new StringBuilder(num2.substring(0,j+1))).append(str);
                   System.out.println("else if");
            }
        }
        else if(i>=0 && j<0){
            while(i>=0 && c>0){
                sum=c+Integer.parseInt(String.valueOf(num1.charAt(i)));
                c=sum/10;
                sum=sum%10;
                str=(new StringBuilder(Integer.toString(sum))).append(str);
                i--;
            }
            if(i<0 && c>0){
                str=(new StringBuilder("1")).append(str);
            }
            else if(i>=0 && c<=0){
                str=(new StringBuilder(num1.substring(0,i+1))).append(str);
            }
        }
        else if(i<0 && j<0 && c>0){
            str=(new StringBuilder("1")).append(str);
        }
        return str.toString();
    }
}