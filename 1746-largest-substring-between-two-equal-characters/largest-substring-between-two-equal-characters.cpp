class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n=s.length();

        int ans=-1;
        // while(i<j){
        //     if(s[i]==s[j]){
        //         ans=j-i-1;
        //         return ans;
        //     }
        //     i++;
        //     --j;
        // }

        for(int i=0;i<n;i++){

            for(int j=n-1;j>=0;j--){
                if(s[i]==s[j]){
                    ans=max(ans,j-i-1);
                    break;
                }
            }
        }

        return ans;


    }
};