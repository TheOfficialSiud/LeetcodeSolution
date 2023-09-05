class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       map<int,int> mp;
        for(int i=0;i<nums.size();i++){
                mp[nums[i]]++;
        }
        vector<vector<int>> vec;
        for(auto it:mp){
            vec.push_back({it.second,it.first});
        }
        sort(vec.begin(),vec.end());
        vector<int> ans;
        for(int i=vec.size()-1;i>=0;i--){
                if(k){
                    ans.push_back(vec[i][1]);
                    --k;
                }
                if(k==0)
                return ans;
        }
        return ans;
    }
};