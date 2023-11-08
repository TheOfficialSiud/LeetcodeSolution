class Solution {
public:
    void sunset(vector<int> nums,vector<int> output, vector<vector<int>> &ans, int i){
        if(i>=nums.size())
       {
           ans.push_back(output);
           return;
       }
        sunset(nums,output,ans,i+1);

        int t=nums[i];
        output.push_back(t);
        sunset(nums,output,ans,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        sunset(nums,output,ans,0);

        return ans;
    }
};