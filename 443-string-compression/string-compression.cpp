class Solution {
public:
    int compress(vector<char>& chars) {
        // int ans=1;
        // for(int i=0;i<chars.size();i++){
        //     if(chars[i]==chars[i+1]){
        //         int j=i,c=0;
        //         while(j<chars.size()){
        //             if(chars[j]==chars[j+1])
        //             c++;
        //             else
        //             break;
        //             j++;
        //         }
        //         i=j;
        //         ans=ans+log10(c)+1;
        //     }
        //     else
        //     ans++;
        // }
        // return ans;

       
        int n=chars.size();
         if(n==1)
        return 1;
        vector<char> temp;
        for(int i=0;i<n;i++){
            temp.push_back(chars[i]);
            if(i==n-1)
            continue;
            if(chars[i]==chars[i+1]){
                    int c=1,j=i;
                    while(j<n-1){
                        if(chars[j]!=chars[j+1])
                        break;
                        else
                        c++;
                        j++;
                    }
                    i=j;
                    j=log10(c);
                    int div=pow(10,j);
                    cout<<div<<" "<<c<<endl;
                    while(div){
                        cout<<char((c/div)+48)<<endl;
                        temp.push_back(char((c/div)+48));
                       c=c%div;
                       div=div/10;
                    }
            }
        }

        chars=temp;
        return temp.size();
    }
};