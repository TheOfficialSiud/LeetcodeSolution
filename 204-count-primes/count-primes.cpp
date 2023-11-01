class Solution {
public:
    int countPrimes(int n) {
        if(n<=1)
        return 0;
       vector<int> prime(n,0);
    //    for(int i=0;i<n-1;i++){
    //         prime[i]=i+2;
    //    }
       for(int i=2;i<sqrt(n);i++){
           if(prime[i]==-1)
           continue;
            for(int j=(i*i);j<n;j+=i){
                    prime[j]=-1;
            }
       }
       int ans=0;
       for(int i=2;i<prime.size();i++)
       {
            if(prime[i]!=-1)
            ans++;
       }
       return ans;
    }
};