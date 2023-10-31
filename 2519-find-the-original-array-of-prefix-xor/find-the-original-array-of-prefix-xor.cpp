class Solution {
public:
    string binaryreturn(int n){
        string s="";
        for(int i=0;i<20;i++){
            if(n==0){
                s+="0";
            }
            else{
                s+=to_string(n%2);
                n=n/2;
            }
        }
        reverse(s.begin(),s.end());
        return s;
    }
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans;
        ans.push_back(pref[0]);
        string s1=binaryreturn(pref[0]);
        for(int i=1;i<pref.size();i++){
              string s2=binaryreturn(pref[i]);
              string ansi="";
              for(int i=0;i<20;i++){
                  if(s2[i]=='0'){
                        if(s1[i]=='0')
                        ansi+="0";
                        else
                        ansi+="1";
                  }
                  if(s2[i]=='1'){
                        if(s1[i]=='0')
                        ansi+="1";
                        else
                        ansi+="0";
                  }
              }
              //cout<<s1<<" "<<s2<<" "<<ansi<<endl;
             s1=s2;
             ans.push_back(stoi(ansi,0,2));


        }
        return ans;
    }
};