class Solution {
public:
    int countHomogenous(string s) {

       // string
        int i=0,n=s.length(),j;
        int mod=1e9+7;
        int ans=0;
        while(i<n){
            j=i;
            long m=0;
            while(s[j]==s[i]){
                    m++;
                    j++;
            }
            m=(m*(m+1))/2;
            ans=(ans%mod+m%mod)%mod;
            i=j;
        }
        return ans;
    }
};