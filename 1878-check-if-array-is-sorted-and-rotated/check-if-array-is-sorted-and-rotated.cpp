class Solution {
public:
    void county(vector<int>& nums,int i,int &cnt){
        if(i==nums.size()-1)
            {
                if(nums[0]<nums[i])
                cnt++;
                return ;
            }
        if(nums[i]>nums[i+1])
        cnt++;
        return county(nums,i+1,cnt);

    }
    bool check(vector<int>& nums) {
        int cnt=0;
        county(nums,0,cnt);
        cout<<cnt;
        return (cnt==0||cnt==1);
    }
};