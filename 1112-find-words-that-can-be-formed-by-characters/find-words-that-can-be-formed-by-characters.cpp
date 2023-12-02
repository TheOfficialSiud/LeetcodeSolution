class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
       vector<int> a(26,0);
       for(int i=0;i<chars.length();i++){
           a[chars[i]-'a']++;
       } 
       int ans=0;
       for(int i=0;i<words.size();i++){
           vector<int> b(26,0);
           for(int j=0;j<words[i].length();j++){
               b[words[i][j]-'a']++;
           }
           bool flag =true;
           for(int k=0;k<26;k++){
               if(a[k]<b[k]){
                   flag=false;
                   break;
               }
           }
           if(flag){
               ans+=words[i].length();
           }
       }
       return ans;
    }
};