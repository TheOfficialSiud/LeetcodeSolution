class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> mp;
        vector<int> vec;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
         for(auto it:mp)
        {
            vec.push_back(it.second);
        }
        sort(vec.begin(),vec.end(),greater<int>());
        int c=0;

        for(int i=1;i<vec.size();i++){
            
            if(vec[i]==vec[i-1])
            {
                c++;
                vec[i]-=1;
                

                i=0;
                sort(vec.begin(),vec.end(),greater<int>());
                if(vec[vec.size()-1]==0)
                vec.pop_back();
            }
        }
        for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
        return c;
    }
};