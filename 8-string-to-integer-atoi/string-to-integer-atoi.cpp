class Solution {
public:

    bool digit(char c){
        return (c>='0'&&c<='9');

    }
    int myAtoi(string s) {
        int ans=0;
        int n=s.length();
        string dig="";
        char sign='p';

        for(int i=0;i<n;i++){
            if(s[i]==' '){
                if(dig==""){
                    continue;
                }
                else{
                    break;
                }
            }
            else if(s[i]=='+'||s[i]=='-'){
                 if(dig==""&&i+1<n&&digit(s[i+1])){
                    if(s[i]=='-'){
                        sign='n';
                    }
                }
                else{
                    break;
                }

            }
            else if(digit(s[i])){

                dig+=s[i];
            }
            else{
                break;
            }
        }

         long s1=1;
            if(sign=='n'){
            s1=-1;
            }
        for(int i=0;i<dig.length();i++){
            long temp=long(ans)*10+(long(dig[i]-'0')*s1);
           
            // cout<<temp<<endl;
            if(temp>INT_MAX){
                return INT_MAX;
            }
            else if(temp<INT_MIN){
                return INT_MIN;
            }
            else
            ans=temp;
        }

        // cout<<dig;
       
        return ans;
        
    }
};