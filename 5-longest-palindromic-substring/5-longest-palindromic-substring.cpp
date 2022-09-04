class Solution {
public:
    string longestPalindrome(string s) {
        int dp[s.length()][s.length()];
        int start=0,end=0;
        for(int i=0;i<s.length();i++){
            for(int j=0;j<s.length();j++){
                if(i==j){
                    dp[i][j]=1;
                    end=j;
                    start=i;
                }
     
                else
                    dp[i][j]=0;
            }
        }
        
        // cout<<end<<"H";
        for(int i=0;i<s.length()-1;i++){
            if(s.at(i)==s.at(i+1)){
                dp[i][i+1]=1;
                end=i+1;
                start=i;
            }
            
        }
        
        
        // cout<<end<<"H";
        // cout<<s.length();
        // for(int i=0;i+2<s.length();i++){
        //     // cout<<end<<"H";
        //     for(int j=i+2;j<s.length();j++){
        //         if((s.at(i)==s.at(j)) and (dp[i+1][j-1]==1)){
        //             dp[i][j]=1;
        //             end=j;
        //             start=i;
        //             cout<<start<<endl;
        //             cout<<end<<endl;
        //         }
        //     }
        // }
        
        
        for(int l=3;l<=s.length();l++){
            for(int i=0;i<=s.length()-l;i++){
                int j=i+l-1;
                if((s.at(i)==s.at(j)) and (dp[i+1][j-1]==1)){
                    dp[i][j]=1;
                    end=j;
                    start=i;
                    // cout<<start<<endl;
                    // cout<<end<<endl;
                }
            }
        }
        // cout<<end<<"H";
        return s.substr(start,end-start+1);
        
    }
};