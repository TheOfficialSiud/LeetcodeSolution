class Solution {
public:

    string longestPalindrome(string s) {
        int n=s.length(),k=0;
        //string ans="";
        int start=0,ans=0;;
        while(k<n){
            int i=k-1,j=k+1;
            //string str;
            int c1=1;
            //str.push_back(s[k]);
            while(i>=0&&j<n){
                if(s[i]!=s[j])
                break;
                // string t;
                // t.push_back(s[i]);
                // t+=str;
                // t+=s[j];
                // str=t;
                c1+=2;
                --i;
                ++j;
            }
            //cout<<str<<endl;
            if(c1>ans)
           {
               ans=c1;
               start=k-c1/2;
           }

          if(k!=n-1){
                if(s[k]==s[k+1]){
                    i=k;
                    j=k+1;
                    int c2=0;


                 while(i>=0&&j<n){
                if(s[i]!=s[j])
                break;
                // string t;
                // t.push_back(s[i]);
                // t+=str;
                // t+=s[j];
                // str=t;
                c2+=2;
                --i;
                ++j;
            }

            if(c2>ans){
                ans=c2;
                start=k-(c2/2)+1;
            }
                }
          }
           


            k++;
        }

        return s.substr(start,ans);
    }
};