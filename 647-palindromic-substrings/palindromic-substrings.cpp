class Solution {
public:
     bool ispalindrome(string s){
         int n=s.length();

         for(int i=0;i<n/2;i++){
             if(s[i]!=s[n-i-1])
             return 0;
         }

         return 1;
     }
    int countSubstrings(string s) {

        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++){
            string t="";
            for(int j=i;j<n;j++){
                t+=s[j];
                if(ispalindrome(t)){
                    ans++;

                }  
                // else break;     
            }
        }
        return ans;
    }
};