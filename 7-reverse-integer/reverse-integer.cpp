class Solution {
public:
    int reverse(int x) {
        long num=0;
        while(x){
            int rem=x%10;
            x=x/10;
            num=(num*10)+rem;
            if(num>=INT_MAX||num<=INT_MIN)
                return 0;
        }

        return (int)num;
    }
};