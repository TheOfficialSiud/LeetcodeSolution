class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return 0;
        int sum=accumulate(nums.begin(),nums.end(),0);
       
        int tmp=0;
        for(int i=0;i<n;i++){
            if(i!=0)
            tmp=tmp+nums[i-1];
            if(tmp*2==sum-nums[i])
            return i;
        }
        return -1;
    }
};