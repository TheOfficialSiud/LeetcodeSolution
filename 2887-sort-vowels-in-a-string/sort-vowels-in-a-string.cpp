class Solution {
public:
    string sortVowels(string s) {
        
        vector<char> vow;
        for(int i=0;i<s.length();i++){
            if((s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U')||(s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')){
                
                vow.push_back(s[i]);
                s[i]='#';
            }
            
        }
        
        sort(vow.begin(),vow.end(),greater<int>());
        for(int i=0;i<s.length();i++){
            if(s[i]=='#'){
                s[i]=vow.back();
                vow.pop_back();
            }
        }
        return s;
    }
};