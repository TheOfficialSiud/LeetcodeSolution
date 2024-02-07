class Solution {
public:
    string frequencySort(string s) {
       vector<vector<int>> freq;

        int j=97;
        bool flag=true,flag1=true;
       for(int i=0;i<62;i++){
           if(i>25&&flag)
           {
               j=65;
               flag=false;
           }
            if(i>51&&flag1)
            {
                j=48;
            flag1=false;
            }
           
           freq.push_back({0,j++});
       }

       for(int i=0;i<s.length();i++){
           if(s[i]>='a'&&s[i]<='z'){
               freq[s[i]-'a'][0]++;
           }
           else if(s[i]>='A'&&s[i]<='Z'){
               int temp=s[i]-'A';
               freq[temp+26][0]++;
            //    cout<<s[i]-'A'+25;
           }
           else if(s[i]>='0'&&s[i]<='9'){
               int temp=s[i]-'0';
               freq[temp+52][0]++;
           }
           
       }

       sort(freq.begin(),freq.end());
//                for(auto it:freq)
// cout<<it[0]<<" "<<it[1]<<endl;

       string ans="";



       for(int i=61;i>=0;--i){
           if(freq[i][0]==0)
           break;
            while(freq[i][0]){
                freq[i][0]--;
                ans.push_back(char(freq[i][1]));
            }

       } 

       return ans;
    }
};