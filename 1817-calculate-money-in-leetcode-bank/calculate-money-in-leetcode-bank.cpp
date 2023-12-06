class Solution {
public:
    int totalMoney(int n) {
        int sum=0;
        int t=n/7;
        n=n%7;
        sum=t*28+(n*(n+1)/2);
        if(n!=0){
            sum+=t*n;
        }
        if(t>0)
        {
          --t;
          sum+=7*(t+1)*t/2;
        }
        return sum;
    }
};