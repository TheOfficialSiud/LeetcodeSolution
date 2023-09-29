class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool t1=false,t2=false;
        int i=1,d=0;
        while(i<nums.size()){
            if(nums[i]!=nums[i-1])
            {
                d=nums[i]-nums[i-1];
                break;
            }
            ++i;

        }
         if(d==0)
            return true;
        else if(d>0)
        t1=true;
        else
        t2=true;

        if(t1){
        for(int j=i;j<nums.size();j++){
            if(nums[j]>=nums[j-1]){
                    cout<<1;
            }
            else
            return false;
        }
        }
          if(t2){
        for(int j=i;j<nums.size();j++){
            if(nums[j]<=nums[j-1]){
                    cout<<2;
            }
            else
            return false;
        }
        }
        return true;
    }
};