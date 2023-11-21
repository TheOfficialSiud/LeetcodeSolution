class Solution {
public:
   int rev(int n)
    {
        int re=0;
        while(n>0)
        {
            re= re*10 + n%10;
            n/=10;
        }
        return re;
    }  
    int countNicePairs(vector<int>& nums) {
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]-rev(nums[i])]++;
        }
        int ans=0;
        int mod=1e9+7;
        for(auto it:mp)
        {
        long n=long(it.second);
        n=(n*(n-1)/2);
            cout<<n<<" ";
                ans=(ans%mod+n%mod)%mod;
        }
        
        return ans;
    }
};