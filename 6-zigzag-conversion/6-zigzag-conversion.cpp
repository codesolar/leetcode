class Solution {
public:
    string convert(string s, int numRows) {
        vector<vector<char>> vec;
        if(numRows==1){
            return s;
        }
        double coll=(s.length()+numRows-2)/(1.0*2*(numRows-1));
        cout<<coll<<endl;
        if(coll>floor(coll)){
            coll=floor(coll);
            coll++;
        }
        
        cout<<coll<<endl;
        
        int col=(int)coll;
        col=col+(numRows-2)*(col-1);
        cout<<col<<endl;
        for(int i=0;i<numRows;i++){
            vector<char> v;
            for(int j=0;j<col;j++){
                v.push_back('0');
            }
            vec.push_back(v);
        }
        
        bool flag=true;
        int i=0,j=0,k=0;
        while(flag){
            while(i<numRows){
                if(k<s.length()){
                    vec[i][j]=s[k];
                    k++;
                }
                else{
                    flag=false;
                    break;
                }
                i++;
            }
            
            
            i-=2;
            j++;
            while(i>=1){
                if(k<s.length()){
                    vec[i][j]=s[k];
                    k++;
                }
                else{
                    flag=false;
                    break;
                }
                i--;
                j++;
            }
        }
        
        string res="";
        for(i=0;i<numRows;i++){
            for(j=0;j<col;j++){
                if(vec[i][j]!='0'){
                    res=res+vec[i][j];
                }
            }
        }
        
        
        return res;
    }
    
};