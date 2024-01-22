class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int miss,repeat,sum=0;
        int n=nums.size();

        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1])
            {
                repeat=nums[i];
            }
            sum+=nums[i];

        }
        sum=sum-repeat+nums[0];
        miss=(n*(n+1))/2-sum;



        return {repeat,miss};

    }
};