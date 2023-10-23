#include<math.h>
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
        return false;
        float t1=log10(n)/log10(4);
        

        return (t1==floor(t1));
    }
};