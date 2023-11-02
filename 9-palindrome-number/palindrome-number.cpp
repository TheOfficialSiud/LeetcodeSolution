class Solution {
public:

    bool isPalindrome(int x) {
        // if(x<0)
        // return 0;
        // if(x>=0&&x<=9)
        // return 1;
        // int t=pow(10,(int)log10(x));
        // cout<<t<<endl;
        // int i=x/t;
        // x=x%t;
        // if(x==0)
        // return false;
        // int j=x%10;
        // x=x/10;
        // cout<<i<<" "<<j<<" "<<x<<endl;
        // if(i!=j)
        // return false;
        // return isPalindrome(x);
        if(x<0)
        return 0;
        if(x>=0&&x<=9)
        return 1;
        vector<int> v;
        while(x){
            v.push_back(x%10);
            x=x/10;
        }
        int i=0,j=v.size()-1;
        while(i<=j){
            if(v[i]!=v[j])
            return false;
            i++;
            --j;
        }
        return true;

    }
};