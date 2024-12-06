class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        sort(banned.begin(),banned.end());
        for(auto it:banned){
            cout<<it<<" ";
        }
        //vector<int> Aspace;
        int j=0;
        int sum=0;
        int ans=0;
        int m=banned.size();
        for(int i=1;i<=n;i++){
            if(j<m&&i==banned[j]){
                int temp=banned[j];
                while(j<m&&temp==banned[j])
                j++;
            }
            else{
                //Aspace.push_back(i);
                if(sum+i>maxSum){
                    return ans;
                }
                else{
                    sum+=i;
                    ans++;
                }
            }
        }

        return ans;
    }
};