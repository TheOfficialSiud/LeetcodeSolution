class Solution {
public:
    int maxProductDifference(vector<int>& nums) {

        int n=nums.size();
        
        //finding two greatest integer;
        int w=0,x=0;
        int pos=-1;
        for(int i=0;i<n;i++){
            if(nums[i]>=w){
                w=nums[i];
                pos=i;
            }
        }
         for(int i=0;i<n;i++){
            if(nums[i]>=x&&i!=pos){
                x=nums[i];
            }
        }




         //finding two smallest integer;
        int y=INT_MAX,z=INT_MAX;
        pos=-1;
        for(int i=0;i<n;i++){
            if(nums[i]<=y){
                y=nums[i];
                pos=i;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]<=z&&i!=pos){
                z=nums[i];
            }
        }

        // cout<<w<<" "<<x<<" "<<y<<" "<<z;
        return ((w*x)-(y*z));
        
    }
};