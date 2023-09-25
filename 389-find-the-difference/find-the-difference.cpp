class Solution {
public:
    char findTheDifference(string s, string t) {
        // sort(s.begin(),s.end());
        //  sort(t.begin(),t.end());
        int sum1=0,sum2=0;
         for(int i=0;i<s.length();i++){
            //  if(s[i]!=t[i])
            //  return t[i];
               sum1+=(int)s[i];
               sum2+=(int)t[i];

         }
         sum2+=(int)t[s.length()];
         return char(sum2-sum1);
    }
};