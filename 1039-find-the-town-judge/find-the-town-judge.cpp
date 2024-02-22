class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==trust.size())
        return -1;
        if(n==1)
        return 1;
        unordered_map<int,int> mp,mp1;
        for(int i=0;i<trust.size();i++){
            mp[trust[i][1]]++;
            mp1[trust[i][0]]++;
        }
        for(auto it:mp){
            if(it.second==n-1){
                cout<<1;
                if(mp1[it.first]==0)
                return it.first;
            }
        }

        return -1;

    }
};