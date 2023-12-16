class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> a(26,0);
        vector<int> b(26,0);
        if(s.length()!=t.length())
        return 0;

        for(int i=0;i<s.length();i++){
            a[s[i]-'a']++;
            b[t[i]-'a']++;
        }

        return (a==b);

    }
};