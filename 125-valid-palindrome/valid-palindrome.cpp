class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.length()-1,n=s.length();

        while((i<=j)&&(i<n)&&(j>=0)){
            // if(!((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')))
            // i++;
            // if(!((s[j]>='a'&&s[j]<='z')||(s[i]>='A'&&s[i]<='Z')))
            // i++;
            if(!isalnum(s[i]))
            {
                i++;
                continue;
            }
            if(!isalnum(s[j]))
            {
                j--;
                continue;
            }
            if(tolower(s[i])!=tolower(s[j]))
            return false;
            i++;
            --j;
        }
        return true;
    }
};