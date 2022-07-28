class Solution {
public:
    int numTrees(int n) {
        int catalan[n+1];
        for(int i=2;i<n+1;i++)
            catalan[i]=0;
        catalan[0]=1;
        catalan[1]=1;
        for(int i=2;i<n+1;i++){
            for(int k=0;k<i;k++){
                catalan[i]+=catalan[k]*catalan[i-1-k];
            }
        }
        return catalan[n];
    }
};