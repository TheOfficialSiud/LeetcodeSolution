class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n= nums.size();

        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){

            if(mp.find(nums[i])==mp.end())
            mp[nums[i]]=i;
            else{
                if(target==nums[i]*2)
                    return{mp[nums[i]],i};
                else
                    mp[nums[i]]=i;

            }
            
        }

        // sort(nums.begin(),nums.end());

        int i=0,j=n-1;

        while(i<n){
           int tar=target-nums[i];
            if(mp.find(tar)!=mp.end()&&mp[tar]!=i)
                return {i,mp[tar]};
            else
                i++;
        }

        return {i,j};
    }
};