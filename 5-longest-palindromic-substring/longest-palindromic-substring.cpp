class Solution {
public:
    string longestPalindrome(string s) {

        int i=0,j=0,k=0;
        int n=s.length();
        
        // int curr=0,ans=0;
        string ans="";

        //odd case

        while(i<n){

           string curr="";
           curr.push_back(s[i]);
            j=i-1;
            k=i+1;
            while(j>=0&&k<n){
                if(s[j]==s[k]){
                    curr=s[j]+curr+s[k];
                }
                else{
                    break;
                }
                ++k;
                --j;
            }

            if(curr.length()>ans.length()){
                ans=curr;
            }
           
            i++;
        }


        //even case

        i=0;
        int m=1;
        while(m<n){
            cout<<1;
            if(s[i]==s[m]){
                string curr="";
                curr.push_back(s[i]);
                curr.push_back(s[m]);
                j=i-1;
                k=m+1;

                while(j>=0&&k<n){
                if(s[j]==s[k]){
                    curr=s[j]+curr+s[k];
                }
                else{
                    break;
                }
                ++k;
                --j;
            }
            if(curr.length()>ans.length()){
                ans=curr;
            }
                
            }

            i++;
            m++;
        }




        return ans;
        
    }
};