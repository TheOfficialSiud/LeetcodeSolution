class Solution {
public:
    int countPrimes(int N) {
          vector<int> ans;
        for(int i=2;i<N;i++)
        ans.push_back(i);
        
        
        int c=ans.size();
        int n=sqrt(N);
       
        for(int i=2;i<=n;i++){
            
            for(int j=i*i-2;j<ans.size();j=j+i){

                if(ans[j]==-1)
                continue;
                else if(ans[j]%i==0){
                    --c;
                    ans[j]=-1;
                }
            }

        }
        return c;
    }
};