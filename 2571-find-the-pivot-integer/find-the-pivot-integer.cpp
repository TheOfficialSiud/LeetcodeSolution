class Solution {
public:
    int pivotInteger(int n) {
        int tsum=(n*(n+1))/2,sum=0;
        for(int i=1;i<=n;i++){
             if((tsum-i)==2*sum)
             return i;
            sum+=i;
           
        }
        return -1;
    }
};