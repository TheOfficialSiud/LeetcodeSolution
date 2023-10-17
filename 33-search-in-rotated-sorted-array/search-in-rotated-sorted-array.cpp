class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1)
        {
            if(nums[0]==target)
            return 0;
            else
            return -1;
        }
       int pivot=-1;
       int i=0,j=nums.size()-1,mid=(i+j)/2;
       while(i<j){
            if(nums[mid]>=nums[0])
            {
                i=mid+1;
            }
            else{
                j=mid;
            }
            mid=(i+j)/2;
       }
        pivot=i;
        // if(pivot==nums.size()-1)
        // --pivot;
        // if(pivot==0)
        // ++pivot;
        cout<<pivot;
        if((target>=nums[pivot])&&(target<=nums[nums.size()-1])){
               //cout<<1;
                    i=pivot;
                    j=nums.size()-1;
                    mid=(i+j)/2;
                    while(i<=j){
                        cout<<nums[mid]<<endl;
                        if(nums[mid]==target)
                        return mid;
                        else if(nums[mid]<target){
                            i=mid+1;
                        }
                        else
                        j=mid-1;
                        mid=(i+j)/2;
                        
                    }
            }
            else {
                //cout<<1;
                    i=0;
                    j=pivot-1;
                    mid=(i+j)/2;
                    while(i<=j){
                        if(nums[mid]==target)
                        return mid;
                        else if(nums[mid]<target){
                            i=mid+1;
                        }
                        else
                        j=mid-1;
                        mid=(i+j)/2;
                    }
            }
            

       return -1;
    }
};