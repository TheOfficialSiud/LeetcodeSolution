class Solution {
public:
    bool halvesAreAlike(string s) {
        int fv=0;
        int sv=0;
        int fc=0;
        int sc=0;

        int n=s.length();

        for(int i=0;i<n/2;i++){
            if(s[i]=='A'||s[i]=='u'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'){
                fv++;
            }
            else{
                fc++;
            }
        }

        for(int i=n/2;i<n;i++){
            if(s[i]=='A'||s[i]=='u'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'){
                sv++;
            }
            else{
                sc++;
            }
        }

        return (fc==sc&&fv==sv);

    }
};