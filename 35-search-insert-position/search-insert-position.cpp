class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        while(i<=j){
            
            int mid=(i+j)/2;
            // if(i==j){
            //     if(nums[i]<target)
            //     return i+1;
            //     else if(nums[i]>target)
            //     return i;
            // }
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]>target)
            j=mid-1;
            else
            i=mid+1;
            
        }
        cout<<1;
        return i;
    }
};