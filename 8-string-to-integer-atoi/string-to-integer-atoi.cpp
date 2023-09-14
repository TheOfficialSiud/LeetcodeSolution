class Solution {
public:
    int myAtoi(string s) {
         bool t1=false;
         string temp;
        // for(int i=0;i<s.length();i++){
        //     if((!t1)&&((s[i]<char(48))||(s[i]>char(57))))
        //     break;
        //     if((t1)&&((s[i]=='+')||(s[i]=='-'))){
        //         t2=true;
        //     }
        //     if((s[i]>=char(48))&&(s[i]<=char(57))){
        //         temp+=s[i];
        //         t1=false;
        //     }
        // }

        // int ans=0;
        // if(st-)
        
        for(int i=0;i<s.length();i++){
            if(!temp.empty()){
                if(!((s[i]>=char(48))&&(s[i]<=char(57))))
                break;
                else{
                    temp+=s[i];
                }
            }
            else{
                if(s[i]==' ')
                continue;
                else if((s[i]=='-')||(s[i]=='+')){
                    if(i+1<s.length()){
                        if((s[i+1]>=char(48))&&(s[i+1]<=char(57))){
                            if(s[i]=='-')
                            t1=true;
                        }
                        else
                        break;
                    }
                }
                else  if((s[i]>=char(48))&&(s[i]<=char(57))){
                    temp+=s[i];
                }
                else
                break;
            }
        }

        if(temp.empty())
        return 0;

            int ans =0;
            
            for(int i=0;i<temp.length();i++){
                long t=long(ans);
                // cout<<int(temp[i])<<" ";
                // t=long(ans*10)+(int(temp[i])-48);
                t=t*10+(int(temp[i])-48);
                if(t>INT_MAX){
                    if(t1)
                    return INT_MIN;
                    else
                    return INT_MAX;
                }
                
                else 
                ans=t;
                //ans=ans*10+(int(temp[i])-48);
            }
            
    // cout<<ans;
            if(t1){
                ans=(-1)*ans;
                    return ans;
            }
            else
            return ans;


    }
};