class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int> a(26,0);

        int n=words.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<words[i].length();j++){
                a[words[i][j]-'a']++;
            }
        }
        
        for(int i=0;i<26;i++){
            if(a[i]%(n)!=0)
            return 0;
        }

        return 1;
    }
};