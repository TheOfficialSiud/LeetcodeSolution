class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int occ=n/3,c=1,temp;
        sort(nums.begin(),nums.end());
        temp=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]!=temp){
                if(c>occ){
                    ans.push_back(nums[i-1]);
                }
                temp=nums[i];
                c=1;
                cout<<1;
            }
            else if(nums[i]==temp){
                c++;
                cout<<'c';
            }
            cout<<temp<<" "<<c<<endl;
        }
        if(c>occ){
            ans.push_back(nums.back());
        }
        return ans;
    }
};