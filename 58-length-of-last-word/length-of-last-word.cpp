class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0,n=s.length()-1,loc;
        // bool t=false;
        while(n){
            if(s[n]!=' '){
                   loc=n;
                break;   
            }
            --n;
        }
        cout<<loc;
        while(loc>=0){
                if(s[loc]==' ')
                return c;
                c++;
                // cout<<s[]
                --loc;
        }
        return c;
    }
};