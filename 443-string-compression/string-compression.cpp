class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,j=0;
        int n=chars.size();
        char currchar=chars[0];
        int curr_count=0;

        while(i<=n){
            if(i<n && chars[i]==currchar){
                curr_count++;
            }
            else{
                chars[j]=currchar;
                if(i!=n)
                currchar=chars[i];
                j++;

                if(curr_count>1){
                    string temp=to_string(curr_count);
                    int k=0;
                    while(k<temp.length()){
                        chars[j]=temp[k];
                        j++;
                        k++;
                    }
                }
                curr_count=1;
            }

            i++;
        }

        return j;
    }
};