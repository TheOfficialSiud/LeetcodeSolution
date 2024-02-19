class Solution {
public:
    bool isPowerOfTwo(int n) {

       if(n<=0||(n%2!=0&&n!=1))
       return 0;

     float t=log2(n);
     int t1=log2(n);
     cout<<t<<" "<<t1;

     return (t==t1);

    }
};