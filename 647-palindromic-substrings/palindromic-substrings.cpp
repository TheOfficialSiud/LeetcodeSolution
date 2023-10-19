class Solution {
public:
    bool ispalindrome(string s){
        int i=0,j=s.length()-1;
        while(i<=j){
                if(s[i]!=s[j])
                return false;
                i++;
                --j;
        }
        return true;
    }
    int countSubstrings(string s) {
        int ans=0,n=s.length();
        map<char,int> mp;
        for(int i=0;i<n;i++)
        mp[s[i]]++;
        if(mp.size()==1)
        return ((n+1)*n)/2;
        for(int i=0;i<n;i++){
            string t="";
            for(int j=i;j<n;j++){
                    t+=s[j];
                    if(ispalindrome(t)){
                        ans++;
                        cout<<t<<endl;
                    }
                    
            }
        }
        return ans;
    }
};