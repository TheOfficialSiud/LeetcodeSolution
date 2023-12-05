class Solution {
public:
    int numberOfMatches(int n) {
        int c=0;
        while(n>1){
                if(n%2==0){
                    n=n/2;
                    c+=n;
                }
                if(n%2==1){
                    n=(n+1)/2;
                    c+=(n-1);
                }
        }
        return c;
    }
};