class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int n=nums.size();
        int occ=n/3,c=1,temp=nums[0];;
       
        
        for(int i=1;i<n;i++){
            if(nums[i]!=temp){
                if(c>occ){
                    ans.push_back(nums[i-1]);
                }
                temp=nums[i];
                c=1;
            }
            else{
                c++;
            }
        }
        
        if(c>occ){
            ans.push_back(nums.back());
        }
        return ans;
    }
};