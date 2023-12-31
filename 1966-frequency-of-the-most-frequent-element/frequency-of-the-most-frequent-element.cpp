class Solution {
public:
    bool ifPossible(vector<int> nums, int k, int mid){
        long long int cSum = 0;
        for(int i = 0; i<mid; i++){
            cSum+=nums[i];
        }
        int l = 0;
        int i = mid;

        int t = (cSum+k)/mid;
        if(t>=nums[i-1]) return true;
        while(i<nums.size()){
            cSum+=nums[i];
            cSum-=nums[l];
            l++;
            i++;
            int t = (cSum+k)/mid;
            if(t>=nums[i-1]) return true;
        }
        return false;

    }
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int s = 1;
        int e = nums.size();
        while(s<=e){
            int mid = (s+e)/2;
            if(ifPossible(nums,k,mid)){
                ans = mid;
                s = mid+1;
            }
            else e = mid-1;
        }

        return ans;
    }
};