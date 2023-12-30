class Solution {
public:
    bool makeEqual(vector<string>& words) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
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