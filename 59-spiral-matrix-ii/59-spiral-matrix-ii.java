class Solution {
    public int[][] generateMatrix(int n) {
        int c=1,b=0;
        boolean flag=true;
        int[][] matrix=new int[n][n];
        int i=0,j=0;
        while(c<=n*n){
            if(flag==true){
            matrix[i][j]=c;
            c++;
            }
            if(i==b && j+1<n-b && matrix[i][j+1]==0)
            {
                j++;
                flag=true;
            }
            else if(j+1==n-b && i+1<n-b && matrix[i+1][j]==0)
                i++;
            else if(i+1==n-b && j-1>=b && matrix[i][j-1]==0)
                j--;
            else if(j==b && i-1>=b+1 && matrix[i-1][j]==0)
            {
                i--;
            }
            else if(i-1==b){
                b++;
                flag=false;
            }
        }
        return matrix;
    }
}