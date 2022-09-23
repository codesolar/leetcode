class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxx=INT_MIN,maxi,mini;
        int c=0;
        int i=0,j=height.size()-1;
        while(i<j){
            c=min(height[i],height[j])*(j-i);
            if(c>maxx){
                maxx=c;
                maxi=i;
                mini=j;
            }
            
            if(height[i]>height[j]){
                j--;
                
            }
            else i++;
        }
        // cout<<maxi<<endl;
        // cout<<mini<<endl;
        return maxx;
    }
};