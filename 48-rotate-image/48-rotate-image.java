class Solution {
    public void rotate(int[][] matrix) {
        int r=matrix.length;
        int i=0,j=0;
        int t=0,t1=0;
        while(r>=2){
        for(int l=0;l<r-1;l++){
            t=matrix[i+l][j+r-1];
            matrix[i+l][j+r-1]=matrix[i][j+l];
            t1=matrix[i+r-1][j+r-1-l];
            matrix[i+r-1][j+r-1-l]=t;
            t=matrix[i+r-1-l][j];
            matrix[i+r-1-l][j]=t1;
            matrix[i][j+l]=t;
        }
            r=r-2;
            i+=1;
            j+=1;
        }
        
    }

}