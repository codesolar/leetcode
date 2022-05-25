class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int re=0,ce=0;
        boolean flag=false;
        for(int i=0;i<matrix[0].length;i++){
            ce++;
            if(target<matrix[0][i]){
                break;
            }
        }
        for(int i=0;i<matrix.length;i++){
            re++;
            if(target<matrix[i][0]){
                break;
            }
        }
        for(int i=0;i<re;i++){
            for(int j=0;j<ce;j++){
                if(matrix[i][j]==target)
                {
                    flag=true;
                    break;
                }
            }
        }
        return flag;
    }
}