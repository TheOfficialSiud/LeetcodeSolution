class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int ind=-1;
        int n=nums.size();
        // for(int i=0;i<n;i++){
        //     if(nums[i]!=val)
        //     {
        //         ind=i;
        //         break;
        //     }
        // }
        // if(ind=-1)
        //     return 0;
        int ans;
        for(int i=0;i<n;i++){
            if(nums[i]==val){
                for(int j=i+1;j<n;j++){
                    if(nums[j]!=val){
                        swap(nums[i],nums[j]);
                    }
                }
            }
            
        }
        for(int i=0;i<n;i++)
            cout<<nums[i]<<" ";
        cout<<endl;
        for(int i=0;i<n;i++){
            if(nums[i]==val){
                ans=i;
                break;
            }
        }
        return ans;
    }
};