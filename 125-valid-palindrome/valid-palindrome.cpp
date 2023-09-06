class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length()<=1)
        return true;
        int i=0,j=s.length()-1;
        while(i<=j){
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
            else{
                i++;
                j--;
            }
            // cout<<s[i]<<s[j]<<" ";
        }
        return true;
    }
};