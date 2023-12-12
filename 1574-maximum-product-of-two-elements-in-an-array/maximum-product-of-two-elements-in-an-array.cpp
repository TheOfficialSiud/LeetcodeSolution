class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int max1=INT_MIN;
        int pos=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max1)
           {
                max1=nums[i];
                pos=i;
           }
            
        }
        int max2=INT_MIN;
         for(int i=0;i<nums.size();i++){
            if(nums[i]>max2&&i!=pos)
           {
                max2=nums[i];
                
           }
            
        }
        return (max1-1)*(max2-1);
    }
};