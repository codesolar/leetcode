class Solution {
public:
    void insertion_sort(vector<int>& nums,int start){
        for(int i=start+1;i<nums.size();i++){
            int x=nums[i];
            int  j=i-1;
            while(j>=start){
                if(nums[j]>x){
                    nums[j+1]=nums[j];
                    j--;
                }
                else break;
            }
            nums[j+1]=x;
        }
    }
    void nextPermutation(vector<int>& nums) {
        bool flag=true;//mean i assume array is soted in descending mannner
        
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                flag=false;
            }
        }
        
        if(flag){
            //means array is descending
            // so send the complete ascending order
            insertion_sort(nums,0);
        }
        else{
            if(nums.size()==2){
                int t=nums[0];
                nums[0]=nums[1];
                nums[1]=t;
                return;
            }
            for(int i=0;i<nums.size()-2;i++){
                flag=true;//true=>the elements after the "held" element are in decreasing                             //order
                for(int j=i+1;j<nums.size()-1;j++){
                    if(nums[j]<nums[j+1])// >= means it is okay
                    {
                        flag=false;
                        break;
                    }
                }
                if(i==nums.size()-3 and flag==false){
                    int t=nums[i+1];
                    nums[i+1]=nums[i+2];
                    nums[i+2]=t;
                    break;
                }
                if(flag==false){
                    continue;
                }
                cout<<"he";
                int next=i+1;
                cout<<next;
                for(int k=i+1;k<nums.size();k++){
                    if(nums[k]>nums[i] and nums[k]<nums[next]){
                        next=k;
                    }
                }
                cout<<next;
                for(int l=0;l<nums.size();l++){
                    cout<<nums[l];
                }
                int t=nums[i];
                nums[i]=nums[next];
                cout<<nums[next];
                nums[next]=t;
                for(int l=0;l<nums.size();l++){
                    cout<<nums[l];
                }
                insertion_sort(nums,i+1);
                break;
            }
        }
    }
};