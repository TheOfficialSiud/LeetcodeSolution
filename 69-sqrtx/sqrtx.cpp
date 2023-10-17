class Solution {
public:
    int mySqrt(int x) {
        long i=0,j=x,mid=(i+j)/2;
        while(i<=j){
            if(mid*mid==x)
            return mid;
            else if (mid*mid>x)
            j=mid-1;
            else
            i=mid+1;
            mid=(i+j)/2;
        }
        cout<<i<<" "<<j<<" "<<mid;
        return mid;
    }
};