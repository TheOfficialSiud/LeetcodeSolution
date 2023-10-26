class Solution {
public:
 int pivot(vector<int> &nums){
     int i=0,j=nums.size();
     while(i<j){
         int mid=(i+j)/2;
         if(nums[mid]>=nums[0])
         i=mid+1;
         else
         j=mid;

     }
     return j;
 }
    int findMin(vector<int>& nums) {
        int ans=pivot(nums);
       if(ans>=nums.size())
       return nums[0];
       else
        return nums[ans];
    }
};