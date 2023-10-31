class Solution {
public:
    bool check(vector<int>& nums) {
        int c=0,n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i])
            c++;
        }
        if(nums[n-1]>nums[0])
        c++;

        return c<=1;
    }
};