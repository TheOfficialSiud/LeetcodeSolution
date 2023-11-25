class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
       
        // int n=nums.size();
        // vector<vector<int>> vec(n-1);
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         vec[i].push_back(abs(nums[i]-nums[j]));
        //     }
        // }
        // vector<int> ans(n,0);

        // for(int i=0;i<vec.size();i++){
        //     ans[i]=accumulate(vec[i].begin(),vec[i].end(),0);
        // }


        //  for(int i=0;i<vec.size();i++){
        //      int t=i+1;
        //     for(int j=0;j<vec[i].size();j++){
        //         ans[j+t]+=vec[i][j];
        //     }
        // }
        // return ans;

        // vector<int> ans;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     int t=0;
        //     for(int j=0;j<n;j++){
        //         t+=abs(nums[i]-nums[j]);
        //     }
        //     ans.push_back(t);
        // }

        // return ans;


        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int n = nums.size();
        vector<int> preSum(n, 0);

        preSum[0] = nums[0];
        for (int i = 1; i < n; i++)
            preSum[i] = preSum[i - 1] + nums[i];

        for (int i = 0; i < n; i++) {
            int leftSum = i * nums[i] - (i > 0 ? preSum[i - 1] : 0);
            int rightSum = (preSum[n - 1] - preSum[i]) - (n - 1 - i) * nums[i];

            nums[i] = leftSum + rightSum;
        }

        return nums;
    }
};