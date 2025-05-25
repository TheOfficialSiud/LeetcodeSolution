class Solution {
public:

    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].length();j++){
                // cout<<words[i][j];
                if(words[i][j]==x){
                    ans.push_back(i);
                    break;
                }
            }
            // cout<<endl;
        }
        return ans;
    }
};