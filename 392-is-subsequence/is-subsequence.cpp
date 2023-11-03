class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0,n1=s.length(),n2=t.length();
        if(n1>n2)
        return false;
        while(i<n1&&j<n2){
            if(s[i]==t[j])
            i++;
            j++;
        }
        return (i==n1);
    }
};