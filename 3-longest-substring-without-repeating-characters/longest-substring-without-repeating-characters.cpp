class Solution {
public:

    int lengthOfLongestSubstring(string s) {
        int i=0;
        string ans="";
        
        for(int i=0;i<s.length();i++){
            string temp="";
            set<char> t;
            for(int j=i;j<s.length();j++){
                t.insert(s[j]);
                temp+=s[j];
                if(t.size()!=temp.length()){
                    temp.pop_back();
                     break;
                }
               
            }
            if(ans.length()<temp.length())
            ans=temp;
        }
        cout<<ans;
        return ans.length();
    }
};