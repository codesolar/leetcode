class Solution {
    
    vector<vector<char>> res;
    
    bool okay(vector<vector<char>>& board,int row,int col,char x){
        
        int m=9;
        int n=9;
        
        
        bool flag=true;
        
        for(int i=0;i<m;i++){
            if(i!=row and board[i][col]==x){
                flag=false;
                break;
            }
        }
        
        if(flag==true){
            for(int j=0;j<n;j++){
                if(j!=col and board[row][j]==x){
                    flag=false;
                    break;
                }
            }
        }
        
        
        
        if(flag==true){
            int start_row=(row/3);
            start_row*=3;

            int start_col=(col/3);
            start_col*=3;
            
            for(int i=start_row;i<start_row+3;i++){
                for(int j=start_col;j<start_col+3;j++){
                    if(row!=i and col!=j and board[i][j]==x){
                        flag=false;
                        break;
                    }
                }
                if(flag==false) break;
            }
        }
        
        
                                                                 
        return flag;
                                                                 
                                                                 
    }
    
    
    void func(vector<vector<char>> &board,int row,int col){
        int m=9;
        int n=9;
        
        
        if(row==-1 and col==-1){
            for(auto it:board){
                res.push_back(it);
            }
            return;
        }
        
        // cout<<row<<endl;
        // cout<<col<<endl;
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 cout<<board[i][j]<<" ";  
//             }
//             cout<<endl;
//         }
        
            
        if(board[row][col]=='.'){
                
                
            // cout<<"row ="<<row<<endl;
            // cout<<"col ="<<col<<endl;
            for(int num=1;num<=9;num++){
                char c=num+'0';
                    
                if(okay(board,row,col,c)==true){
                        
                        
                    board[row][col]=c;
                        
                        
                        
                        
                    if(col+1<n){
                        func(board,row,col+1);
                    }
                    else if(row+1<m){
                        func(board,row+1,0);
                    }
                    else{
                        func(board,-1,-1);
                        return;
                    }
                        
                        
                    board[row][col]='.';
                        
                }
            }
                
                
                
        }
        else{
            if(col+1<n){
                func(board,row,col+1);
            }
            else if(row+1<m){
                func(board,row+1,0);
            }
            else{
                func(board,-1,-1);
                return;
            }
        }
            
        
        return;
    }
    
    
    
public:
    void solveSudoku(vector<vector<char>>& board) {
        func(board,0,0);
        board.clear();
        for(auto it:res){
            board.push_back(it);
        }
        return;
    }
};