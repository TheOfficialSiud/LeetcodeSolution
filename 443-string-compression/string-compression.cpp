class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,j=1,c=1;
       // chars.push_back('1');
        int n=chars.size();
        while(j<n){
            if(chars[j]==chars[j-1]){
                    c++;
            }
            else{
                
                chars[i]=chars[j-1];
                i++;
                if(c>1){
                string s=to_string(c);
                for(auto it:s){
                    chars[i]=it;
                    i++;
                }
                }
                c=1;

            }
            j++;
        }
             chars[i]=chars[j-1];
                i++;
                if(c>1){
                string s=to_string(c);
                for(auto it:s){
                    chars[i]=it;
                    i++;
                }
                }
        

        return i;

    }
};