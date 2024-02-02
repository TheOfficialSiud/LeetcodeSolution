class Solution {
public:
    string reverseWords(string s) {
        
        string ans="";
        int n=s.length();
        int i=n-1;

        while(i>=0){
            if(s[i]!=' '){
                string temp="";
                while(i>=0&&s[i]!=' '){
                    temp.push_back(s[i]);
                    i--;
                }

                if(!temp.empty())
                {
                    reverse(temp.begin(),temp.end());
                    ans+=temp;
                    ans.push_back(' ');
                }
            }
            else
            i--;
        }
        ans.pop_back();
        return ans;
    }
};