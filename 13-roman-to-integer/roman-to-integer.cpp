class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp;

        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        // mp['IX']=9;
        // mp['IV']=4;
        // mp['XC']=90;
        // mp['XL']=40;
        // mp['CD']=400;
        // mp['CM']=900;

        int n=s.length();
        int res=0;
        bool flag=true;

        for(int i=0;i<n;i++){
            
            
            if(s[i]=='I'){
                if(i+1<n&&s[i+1]=='V'){
                    res+=4;
                    i++;
                    flag=false;
                }
                else if(i+1<n&&s[i+1]=='X'){
                    res+=9;
                    i++;
                    flag=false;
                }
                else{
                    res+=mp[s[i]];
                }

            }
            else if(s[i]=='X'){
                if(i+1<n&&s[i+1]=='L'){
                    res+=40;
                    i++;
                    flag=false;
                }
                else if(i+1<n&&s[i+1]=='C'){
                    res+=90;
                    i++;
                    flag=false;
                }
                else{
                    res+=10;
                }

            }
              else if(s[i]=='C'){
                if(i+1<n&&s[i+1]=='D'){
                    res+=400;
                    i++;
                    flag=false;
                }
                else if(i+1<n&&s[i+1]=='M'){
                    res+=900;
                    i++;
                    flag=false;
                }
                else{
                    res+=100;
                }

            }
            else{
                res+=mp[s[i]];
            }

            cout<<res<<" "<<flag<<endl;

        }
        
        // if(flag){
        //     res+=mp[s[n-1]];
        // }


        return res;


    }
};