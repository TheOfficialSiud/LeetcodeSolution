class Solution {
public:
    int countHomogenous(string s) {
        vector<string> vec;

       // string
        int i=0,n=s.length(),j;
        while(i<n){
            j=i;
            string tmp="";
            while(s[j]==s[i]){
                    tmp.push_back(s[j]);
                    j++;
            }
            vec.push_back(tmp);
            i=j;
        }
        int mod=1e9+7;
        int ans=0;
        for(auto it:vec){
            long m=it.length();
            m=(m*(m+1))/2;
           
            ans=(ans%mod+m%mod)%mod;
        }

        return ans;
    }
};