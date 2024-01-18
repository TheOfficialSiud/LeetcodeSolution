class Solution {
public:
    int climbStairs(int n) {
            
        int prev,prevone,curr=0;
        if(n==1||n==2)
        return n;
        else{
            prev=1;
            prevone=2;
        }

        while(n>=3){
             cout<<prev<<" "<<prevone<<" ";
            
            curr=prev+prevone;
            cout<<curr<<endl;
            prev=prevone;
            prevone=curr;
            
            --n;
            // cout<<prev<<" "<<prevone<<" "<<curr<<endl;
        }

        return curr;
        
    }
};