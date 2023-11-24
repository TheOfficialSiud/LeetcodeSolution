class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=piles.size();
        int c=0;
        sort(piles.begin(),piles.end(),greater<int>());
        for(int i=0;i<n;i+=2){
            c+=piles[i+1];
            --n;
        }
        return c;
    }
};