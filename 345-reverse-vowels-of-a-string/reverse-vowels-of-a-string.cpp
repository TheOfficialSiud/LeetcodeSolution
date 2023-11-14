class Solution {
public:
    string reverseVowels(string s) {
       string vow;
        for(int i=0;i<s.length();i++){
            if((s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U')||(s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')){
                
                vow.push_back(s[i]);
                //s[i]='#';
            }
            
        }
        
        reverse(vow.begin(),vow.end());
        cout<<vow;
        int j=0;
        for(int i=0;i<s.length();i++){
            if((s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U')||(s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')){
                s[i]=vow[j];
                j++;
            }
        }
        return s;
    }
};