class Solution {
public:
    void partition(vector<int> nums,vector<int> output,int ind,vector<vector<int>> &ans){
        if(ind>=nums.size())
        {
            ans.push_back(output);
            return;
        }

        //exclude
            partition(nums,output,ind+1,ans);

        //include
        int element=nums[ind];
        output.push_back(nums[ind]);
         partition(nums,output,ind+1,ans); 
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
         partition(nums,output,0,ans);
         return ans;
    }
};