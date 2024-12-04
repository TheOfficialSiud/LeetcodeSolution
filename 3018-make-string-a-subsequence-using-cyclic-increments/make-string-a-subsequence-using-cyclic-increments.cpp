class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i=0,j=0;
        int n=str1.length(),m=str2.length();
        int c=0;
        while(i<n&&j<m){
            char nex=str1[i];
            if(str1[i]=='z'){
                nex='a';
            }
            else{
                 nex++;
            }
            if(str1[i]==str2[j]||nex==str2[j]){
                j++; 
                c++;   
            }

            i++;

        }
        //cout<<c;
        return c==m;
    }
};