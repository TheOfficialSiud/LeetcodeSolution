class Solution {
public:
    int integerBreak(int n) {
        if(n==2)
        return 1;
        if(n==3)
        return 2;
       int mul=n/3,ans;
       ans=pow(3,mul);
       mul=n%3;
       if(mul==1){
        ans=ans*4;
        ans=ans/3;
       }
       else if(mul==2)
       {
           ans=ans*mul;
       }
     
       return ans;
    }
};