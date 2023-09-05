class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total=1,c=0,n=nums.size(),loc;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
            c++;
            loc=i;
            }
            else
            total*=nums[i];
        }
        vector<int> ans(n,0);
        if(c>=2)
        return ans;
        if(c==1)
        {
            ans[loc]=total;
        }
        else{
                for(int i=0;i<n;i++){
                    ans[i]=(total/nums[i]);
                }
        }
        return ans;


    }
};