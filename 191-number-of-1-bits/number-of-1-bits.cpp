class Solution {
public:
    int hammingWeight(uint32_t n) 
    {
        // string s=to_string(n);
        int c=0;
        // cout<<s;
        while(n){
            n=n&(n-1);
            c++;
        }
      
        return c;
    }
};