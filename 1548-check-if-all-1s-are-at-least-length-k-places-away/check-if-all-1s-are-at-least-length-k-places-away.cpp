class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int first=-1;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                first=i;
                break;
            }
        }
        if(first==-1){
            return 1;
        }

        int dis=0;
        for(int i=first+1;i<nums.size();i++){
            
            if(nums[i]==1){
               if(dis<k){
                return 0;
               }
               else{
                dis=0;
                continue;
               }
            }
            dis++;
        }

        return 1;

    }
};