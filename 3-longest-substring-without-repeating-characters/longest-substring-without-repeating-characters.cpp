class Solution {
public:
bool nonrepeatchar(char s1, string s){
    map<char,int> mp;
    for(int i=0;i<s.length();i++){
         if(s[i]==s1)
         return false;
    }
    return true;
 
}

    int lengthOfLongestSubstring(string s) {
        int i=0;
        string ans="";
        for(int i=0;i<s.length();i++){
            string temp="";
            for(int j=i;j<s.length();j++){
                if(nonrepeatchar(s[j],temp)){
                    temp+=s[j];
                }
                else
                break;
            }
            if(ans.length()<temp.length())
            ans=temp;
        }
        cout<<ans;
        return ans.length();
    }
};