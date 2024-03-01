class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        sort(s.begin(),s.end(),greater<int> ());
        // cout<<s;
        int n=s.length();
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1')
                swap(s[i],s[n-1]);
        }
        return s;
        
    }
};