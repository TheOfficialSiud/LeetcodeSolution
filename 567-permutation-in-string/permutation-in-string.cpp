class Solution {
public:

   inline bool checkInclusion(string s1, string s2) {
       int n=s1.length(),m=s2.length();
       if(n>m)
       return false;
       vector<int> a(26,0);
       for(int i=0;i<n;i++){
           a[s1[i]-'a']++;
       }
        vector<int> b(26,0);
       for(int i=0;i<n;i++){
            b[s2[i]-'a']++;
       }
       if(a==b)
       return true;
        for(int i=1;i<=m-n;i++){
            b[s2[i-1]-'a']--;
            b[s2[i+n-1]-'a']++;
            if(a==b)
            return true;
        }


       return false;
    }
};