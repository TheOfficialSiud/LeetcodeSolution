class Solution {
public:

    int countone(string s){
        int t=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1')
            t++;
        }
        return t;
    }

    int numberOfBeams(vector<string>& bank) {
        
        int n=bank.size();
        int c1=0,c2=0;

        int ans=0;

        for(int i=0;i<n;i++){
            if(c1!=0){
                c2=c1;
            }
            c1=countone(bank[i]);
         
            if(c1!=0&&c2!=0){
                // cout<<c1<<" "<<c2<<endl;
                ans=ans+(c1*c2);
            }

        }
          return ans;
    }
};