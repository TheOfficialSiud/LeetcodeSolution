class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,vector<int>> mp;
        map<string,int> mp1;
        for(int i=0;i<pattern.length();i++){
            mp[pattern[i]].push_back(i);
        }
        s.push_back(' ');
        vector<string> words;
        string temp="";

        for(int i=0;i<s.length();i++){
            if(s[i]==' ')
            {
                words.push_back(temp);
                mp1[temp]++;
                temp="";
            }
            else
            temp+=s[i];

        }
        // words.push_back(temp);
        
        // for(auto it:words){
        //     cout<<it<<" ";
        // }
        // cout<<1<<endl;
        if(pattern.length()!=words.size())
        return 0;
        for(auto it:mp){
            vector<int> t=it.second;
              if(t.size()!=mp1[words[t[0]]])
                return 0;
            for(int i=1;i<t.size();i++){
              
                    if(words[t[i]]!=words[t[0]])
                    {
                        cout<<1;
                        cout<<words[t[i]]<<" "<<1<<words[t[0]];
                        return 0;
                    }
            }

            //  t=it.second;
            // for(int i=0;i<t.size();i++){
            //         cout<<it.first<<" "<<t[i]<<endl;
            // }

        }

        return 1;
        
        

    }
};