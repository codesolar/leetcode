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
            else if(height[i]<height[j]){
                i++;
            }
            else if(i+1<j-1 and height[i+1]<height[j-1]){
                j--;
            }
            else if(i+1<j-1 and height[i+1]>=height[j-1]){
                i++;
            }
            else break;
        }
        // cout<<maxi<<endl;
        // cout<<mini<<endl;
        return maxx;
    }
};