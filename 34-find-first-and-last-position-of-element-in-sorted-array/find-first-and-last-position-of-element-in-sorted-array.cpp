class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        if(nums.size()==0){
            return {-1,-1};
        }
        else if(nums.size()==1){
            if(nums[0]==target){
                return {0,0};
            }
            else{
                return {-1,-1};
            }
        }
        bool t1=false,t2=false;
        while(i<=j){
            if(nums[i]==target){
                t1=true;
            }
            if(nums[j]==target){
                t2=true;
            }
            if(!t1){
                i++;
            }
            if(!t2){
                --j;
            }
            if(t1&t2)
            {
                break;
            }
        }
        cout<<i<<" "<<j;

        if((nums[i]==target)&&(nums[j]==target)){
            return {i,j};
        }
        else 
        return {-1,-1};
    }
};