class Solution {
public:
    void reversenumber(int x,long long &ans){
        if(x==0)
        return;
        ans=(ans*10)+(x%10);
        reversenumber(x/10,ans);
        
    }
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        long long ans=0;
        reversenumber(x,ans);
        return (x==ans);
    }
};