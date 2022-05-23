class Solution {
    public boolean isValidSudoku(char[][] board) {
        Set<Character> set=new HashSet<>();
        boolean flag=false;
       for(int i=0;i<3;i++){
           for(int j=0;j<3;j++){
               if(board[i][j]!='.'){
                   if(set.contains(Character.valueOf(board[i][j]))==false){
                        set.add(Character.valueOf(board[i][j]));
                   }
                   else return false;
               }
           }
       }
        set=new HashSet<Character>();
        for(int i=0;i<3;i++){
           for(int j=3;j<6;j++){
               if(board[i][j]!='.'){
                   if(set.contains(Character.valueOf(board[i][j]))==false){
                        set.add(Character.valueOf(board[i][j]));
                   }
                   else return false;
               }
           }
       }
        set=new HashSet<Character>();
        for(int i=0;i<3;i++){
           for(int j=6;j<9;j++){
               if(board[i][j]!='.'){
                   if(set.contains(Character.valueOf(board[i][j]))==false){
                        set.add(Character.valueOf(board[i][j]));
                   }
                   else return false;
               }
           }
       }
        set=new HashSet<Character>();
        for(int i=3;i<6;i++){
           for(int j=0;j<3;j++){
               if(board[i][j]!='.'){
                   if(set.contains(Character.valueOf(board[i][j]))==false){
                        set.add(Character.valueOf(board[i][j]));
                   }
                   else return false;
               }
           }
       }
        set=new HashSet<Character>();
        for(int i=3;i<6;i++){
           for(int j=3;j<6;j++){
               if(board[i][j]!='.'){
                   if(set.contains(Character.valueOf(board[i][j]))==false){
                        set.add(Character.valueOf(board[i][j]));
                   }
                   else return false;
               }
           }
       }
        set=new HashSet<Character>();
        for(int i=3;i<6;i++){
           for(int j=6;j<9;j++){
               if(board[i][j]!='.'){
                   if(set.contains(Character.valueOf(board[i][j]))==false){
                        set.add(Character.valueOf(board[i][j]));
                   }
                   else return false;
               }
           }
       }
        set=new HashSet<Character>();
        for(int i=6;i<9;i++){
           for(int j=0;j<3;j++){
               if(board[i][j]!='.'){
                   if(set.contains(Character.valueOf(board[i][j]))==false){
                        set.add(Character.valueOf(board[i][j]));
                   }
                   else return false;
               }
           }
       }
        set=new HashSet<Character>();
        for(int i=6;i<9;i++){
           for(int j=3;j<6;j++){
               if(board[i][j]!='.'){
                   if(set.contains(Character.valueOf(board[i][j]))==false){
                        set.add(Character.valueOf(board[i][j]));
                   }
                   else return false;
               }
           }
       }
        set=new HashSet<Character>();
        for(int i=6;i<9;i++){
           for(int j=6;j<9;j++){
               if(board[i][j]!='.'){
                   if(set.contains(Character.valueOf(board[i][j]))==false){
                        set.add(Character.valueOf(board[i][j]));
                   }
                   else return false;
               }
           }
       }
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    flag=false;
                    for(int k=0;k<9;k++){
                        if(k!=j && board[i][j]==board[i][k]){
                            flag=true;
                        }
                    }
                    for(int k=0;k<9;k++){
                        if(k!=i && board[i][j]==board[k][j]){
                            flag=true;
                        }
                    }
                    if(flag==true) return false;
                }
            }
        }
        return true;
    }
}