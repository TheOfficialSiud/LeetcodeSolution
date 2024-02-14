class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int> pos,neg;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0)
            neg.push(nums[i]);
            else
            pos.push(nums[i]);

        }
        for(int i=0;i<n;i++){
            if(i%2==0)
            {
                nums[i]=pos.front();
                pos.pop();
            }
            else{
                nums[i]=neg.front();
                neg.pop(); 
            }
        }

        return nums;


    }
};