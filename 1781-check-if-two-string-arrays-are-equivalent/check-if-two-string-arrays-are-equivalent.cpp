class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        int n1=word1.size(),n2=word2.size();
        string s1="",s2="";
        for(int i=0;i<n1;i++){
            for(int j=0;j<word1[i].length();j++){
                s1.push_back(word1[i][j]);
            }
        }
        for(int i=0;i<n2;i++){
            for(int j=0;j<word2[i].length();j++){
                s2.push_back(word2[i][j]);
            }
        }

        return (s1==s2);
    }
};