class Solution {
public:
        
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size(),i=0,c=0;
        reverse(num.begin(),num.end());
       while((k)||(i<n)){
           if(i>=n){
               int t=(k%10)+c;
               c=0;
               if(t>=10){
                t=t%10;
                c=1;
               }
               num.push_back(t);
               k=k/10;

           }
            else{
                int t=k%10;
                t=c+num[i]+t;
                k=k/10;
                c=0;
                if(t>=10){
                    num[i]=t%10;
                    c=1;
                }
                else{
                    num[i]=t;
                }
                i++;
            }

       }
       if(c==1)
       num.push_back(1);
       reverse(num.begin(),num.end());
       return num;

            


    }
};