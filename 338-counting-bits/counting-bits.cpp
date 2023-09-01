class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        int i=0;
        while(i<=n){
          ans.push_back(__builtin_popcount(i));
            i++;
        }
        return ans;
    }
};