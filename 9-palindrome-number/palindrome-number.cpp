class Solution {
public:

    bool isPalindrome(int x) {
        if(x<0)
        return 0;
        if(x>=0&&x<=9)
        return 1;
        int n=x;
        long long v=0;
        while(x){
            v=v*10+(x%10);
            x=x/10;
        }
        cout<<v;
        return v==n;

    }
};