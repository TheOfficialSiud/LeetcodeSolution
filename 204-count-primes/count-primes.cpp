class Solution {
public:
    int countPrimes(int n) {
        if(n<=1)
        return 0;
       vector<bool> prime(n,1);
       for(int i=2;i<sqrt(n);i++){
           if(!prime[i])
           continue;
            for(int j=(i*i);j<n;j+=i){
                    prime[j]=false;
            }
       }
       int ans=0;
       for(int i=2;i<prime.size();i++)
       {
            if(prime[i])
            ans++;
       }
       return ans;
    }
};