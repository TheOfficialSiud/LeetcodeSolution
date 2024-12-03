class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int c=0;
        int k=s.length(),j=spaces.size();
        --k;
        --j;
        for(int i=0;i<spaces.size();i++){
            spaces[i]+=c;
            c++;
            s+=' ';
        }
        
        int n=s.length()-1;

        char w=' ';
        for(int i=n;i>=0;i--){
            if(j>=0&&i==spaces[j]){
                s[i]=w;
                --j;
            }
            else{
                if(k>=0){
                s[i]=s[k];
                --k;}
            }
        }

    
        return s;
    }
};