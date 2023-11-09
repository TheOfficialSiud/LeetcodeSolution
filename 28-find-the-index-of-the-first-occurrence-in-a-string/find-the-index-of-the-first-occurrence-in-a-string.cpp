class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=0;
        int n=haystack.length();
        int m=needle.length();
        if(n<m)
            return -1;
        if(n==m)
            return (haystack==needle)?0:-1;
        while(i<=n-m){
            while(haystack[i]==needle[j]&&i<n&&j<m){
                i++;
                j++;
            }
            if(j==m){
                return i-m;
            }
            else{
                i=i-j+1;
                j=0;
            }
        }
        
        return -1;
    }
};