class Solution {
public:
    int findContentChildren(vector<int> g, vector<int> s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int n=g.size();
        int m=s.size();

        int i=n-1,j=m-1;

        int ans=0;


        while(i>=0&&j>=0){
            cout<<s[j]<<" "<<g[i]<<endl;
            if(s[j]>=g[i]){
                --i;
                --j;
                ++ans;
            }
            else if(s[j]<g[i]){
                    --i;
            }
        }

        return ans;
    }
};