class Solution {
public:
    bool isSubsequence(string s, string t) {
        char *loc=&s[0];
        int c=0;
        for(int i=0;i<t.length();i++){
            if(loc==NULL)
            break;
                if(t[i]==*loc){
                    c++;
                    loc++;
                }
        }
        return (c==s.length());
    }
};