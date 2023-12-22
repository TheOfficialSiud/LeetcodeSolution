class Solution {
public:
    int maxScore(string s) {

        int countone=0;
        int countzero=0;
        int ans=INT_MIN;
        int n=s.size();

        for(int i=1;i<n;i++){
            if(s[i]=='1')
            countone++;
        }
        if(s[0]=='0')
        countzero++;
        
        ans=countzero+countone;

        for(int i=1;i<n-1;i++){
            if(s[i]=='1'){
                countone--;
            }
            if(s[i]=='0')
            {
                countzero++;
            }

            ans=max(ans,countzero+countone);
        }

        return ans;
    }
};