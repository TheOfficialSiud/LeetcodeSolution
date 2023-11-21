class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        vector<int> temp;
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            string s=to_string(nums[i]);
            reverse(s.begin(),s.end());
            temp.push_back(nums[i]-stoi(s));
            mp[temp.back()]++;
        }
        int ans=0;
        int mod=1e9+7;
        for(auto it:mp)
        {
        //    int n=it.second;
        //     n=(long(n%mod)*(long(n-1)/2)%mod)%mod;
        long n=long(it.second);
        n=(n*(n-1)/2);
            cout<<n<<" ";
                ans=(ans%mod+n%mod)%mod;
        }
        return ans;
    }
};