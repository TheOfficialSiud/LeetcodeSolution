class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();

        int maxi=0;
        int j=0;
        vector<int> mp(1000,-1);

        for(int i=0;i<n;i++){
            cout<<i<<" "<<j<<" "<<maxi<<" "<<mp[s[i]];
            cout<<endl;
            if(mp[s[i]] != -1){
                cout<<i<<"h"<<endl;
                  j=max(mp[s[i]]+1,j);                
            }

            mp[s[i]]=i;
            maxi=max(maxi,i-j+1);

            cout<<i<<" "<<j<<" "<<maxi<<" "<<mp[s[i]];
            cout<<endl;
            cout<<endl;
        }
        return maxi;
    }
};