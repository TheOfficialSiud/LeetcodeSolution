class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
       
        
        sort(nums.begin(),nums.end());
        long long  sum=0;



        int n=nums.size();

        for(int i=0;i<n;i++)
        sum+=nums[i];

        
        for(int i=n-1;i>=0;i--){
            sum-=nums[i];
            if(sum>nums[i]){
                sum+=nums[i];
                if(i>=2)
                return sum;
                else return -1;
            }

        }

       
        return -1;
        
    }
};