class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        // int maxi=INT_MIN,mini=INT_MAX;
        // int n=nums.size();
        // while(maxi!=mini){
        //     int next_great=-1;
        //     int ind1,ind2,ind3;
        //     for(int i=0;i<n;i++){
        //         if(nums[i]>maxi){
        //            maxi=nums[i];
        //            ind1=i;
                    
        //         }
        //         if(nums[i]<mini){
        //            mini=nums[i];
        //            ind2=i;
                    
        //         }
        //     }
        //     if(ind1==0)
        //    {
        //         next_great=nums[1];
        //         ind3=1
        //    }
        //     else
        //     {
        //         next_great=nums[0];
        //         ind3=0;
        //     }
        //     for(int i=0;i<n;i++){
        //         if(nums[i]>next_great&&nums[i]!=maxi)
        //         {
        //                 next_great=nums[i];
        //                 ind3=i;
        //         }
        //     }


        // }


        int n=nums.size(),c=0;
        sort(nums.begin(),nums.end());
        //while(nums[0]!=nums[n-1]){
            for(int i=n-1;i>0;i--){
                if(nums[i]!=nums[i-1]){
                    nums[i]=nums[i-1];
                    c+=(n-i);
                    // break;
                }

            }

            // for(int i=0;i<n-1;i++){
            //     if(nums[i]!=nums[i+1]){
            //         nums[i+1]=nums[i];
            //         c++;
            //     }
            // }
       // }

        return c;
    }
};