class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();

        int maxi=0;
        int j=0;
        vector<int> mp(256,-1);

        for(int i=0;i<n;i++){
            if(mp[s[i]] != -1){
                  j=max(mp[s[i]]+1,j);                
            }
            mp[s[i]]=i;
            maxi=max(maxi,i-j+1);
        }
        return maxi;
    }
};