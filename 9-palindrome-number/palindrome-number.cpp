class Solution {
public:
    bool palindromic(int x,long long v,int n){
        if(x<0)
        return 0;
        if(x==0)
        return (v==n);
        else
        {
            v=(v*10)+(x%10);
            x/=10;
            return palindromic(x,v,n);
        }
    }

    bool isPalindrome(int x) {
        
        return palindromic(x,0ll,x);

    }
};