class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int columns=matrix[0].size();
        if(rows==1 && columns==1) {
            if(matrix[0][0]==target){
                return true;
            }
        }
        if(target<matrix[0][0] || target>matrix[rows-1][columns-1])
            return false;
        else{
            int start=0;
            int end=rows-1;
            int mid=0;
            while(start<=end){
                mid=start+(end-start)/2;
                if(matrix[mid][0]==target){
                    break;
                }
                else if(matrix[mid][0]>target){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            cout<<mid;
            if(matrix[mid][0]==target) return true;
            else{
                //now the row matrix[end][0]contains the element
                int p=end;
                start=0;
                end=columns-1;
                while(start<=end){
                    mid=start+(end-start)/2;
                    if(matrix[p][mid]==target){
                        break;
                    }
                    else if(matrix[p][mid]>target){
                        end=mid-1;
                    }
                    else{
                        start=mid+1;
                    }
                }
                if(matrix[p][mid]==target) return true;
            }
            
        }
        return false;
    }
};