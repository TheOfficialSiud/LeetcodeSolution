class Solution {
public:
        
    vector<int> addToArrayForm(vector<int>& num, int k) {
        // int n=num.size(),c=0;
        // for(int i=n-1;i>=0;i--){
        //         if(k==0)
        //         break;
        //         int t=k%10;
        //         k/=10;
        //         t=t+c+num[i];
        //         c=0;
        //         if(t>9){
        //             c=1;
        //             num[i]=t%10;
        //         }
        //         else
        //         num[i]=t;

        // }
        // if(c==1){
        //          num.push_back(0);
        //          for(int i=n;i>0;i--)
        //          num[i+1]=num[i];
        //          num[0]=1;
        // }
       
        // return num;
        

            //         long long int c=0;
            // int n=num.size();
            // for(int i=0;i<n;i++){
            //         c=(c*10)+num[i];
            // }
            // c+=k;
            // cout<<c;
            // num.clear();
            // while(c){
            //     num.push_back(c%10);
            //     c=c/10;
            // }
            // reverse(num.begin(),num.end());
            // return num;

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