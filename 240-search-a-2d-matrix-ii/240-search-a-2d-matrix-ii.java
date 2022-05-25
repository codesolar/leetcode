// class Solution {
//     public boolean searchMatrix(int[][] matrix, int target) {
//         int re=0,ce=0;
//         boolean flag=false;
//         for(int i=0;i<matrix[0].length;i++){
//             ce++;
//             if(target<matrix[0][i]){
//                 break;
//             }
//         }
//         for(int i=0;i<matrix.length;i++){
//             re++;
//             if(target<matrix[i][0]){
//                 break;
//             }
//         }
//         for(int i=0;i<re;i++){
//             for(int j=0;j<ce;j++){
//                 if(matrix[i][j]==target)
//                 {
//                     flag=true;
//                     break;
//                 }
//             }
//         }
//         return flag;
//     }
// }



class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        
        int r = 0, c = matrix[0].length - 1;
        
        while (r <= matrix.length -1 && c >= 0) {
            if (matrix[r][c] == target) return true;
            if (matrix[r][c] < target) r++;
            else c--;
        }
        
        return false;
    }
}