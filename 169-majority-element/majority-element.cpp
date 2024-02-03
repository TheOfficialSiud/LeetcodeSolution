class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int curr_el=nums[0],curr_occu=0,el=0,occ=INT_MIN;

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=curr_el){
                if(curr_occu>=occ){
                    occ=curr_occu;
                    el=curr_el;   
                }
                curr_occu=1;
                curr_el=nums[i];
               
            }
             else{
                    curr_occu++;
                }
        }

        // cout<<curr_el<<" "<<curr_occu;
        if(curr_occu>occ){
                    el=curr_el;
                }

        return el;

    }
};