class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int i=0,j=0;
        for(i=0;i<matrix.length;i++){
            if(target<=matrix[i][matrix[0].length-1])
                break;
        }
        //System.out.print(i);
        if(i==matrix.length) return false;
        for(j=0;j<matrix[0].length;j++){
            if(target==matrix[i][j])
                return true;
        }
        return false;
    }
}