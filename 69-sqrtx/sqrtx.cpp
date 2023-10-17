class Solution {
public:
    int mySqrt(int x) {
        int i=0,j=x,mid=(i+j)/2;
        while(i<=j){
            long temp=pow(mid,2);
            if(temp==x)
            return mid;
            else if (temp>x)
            j=mid-1;
            else
            i=mid+1;
            mid=(i+j)/2;
        }
        return mid;
    }
};