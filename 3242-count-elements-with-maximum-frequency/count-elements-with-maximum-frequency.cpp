class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> mp;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        
        vector<int> freq;
        
        for(auto it:mp){
            freq.push_back(it.second);
        }
        
        sort(freq.begin(),freq.end(),greater<int> ());
        
        n=freq.size();
        
        int ans=freq[0];
        
        for(int i=1;i<n;i++){
            if(freq[i]==freq[i-1]){
                ans+=freq[i];
            }
            else
                break;
        }
        return ans;
        
    }
};