class Solution {
public:
    string largestGoodInteger(string s) {
        int n=s.length();
        string ans="";
        int a=s[0]-'0',a1=INT_MIN;
        int c=1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                if(c<3)
                a=a*10+(s[i]-'0');
                c++;
            }
            else{
                if(c>=3){
                    a1=max(a1,a);
                    if(a1==0){
                        ans="000";
                    }
                    else
                    ans=to_string(a1);
                }
                
                cout<<a<<" ";
                a=(s[i]-'0');
                c=1;
            }
        }
         if(c>=3){
                    a1=max(a1,a);
                    if(a1==0){
                        ans="000";
                    }
                    else
                    ans=to_string(a1);
                }
        return ans;
    }
};
auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
