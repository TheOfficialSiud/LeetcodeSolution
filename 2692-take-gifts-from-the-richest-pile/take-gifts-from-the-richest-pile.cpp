class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        
        int n=gifts.size();

        while(k){
            int maxi=-1;
            int ind=-1;
            for(int i=0;i<n;i++){
                if(gifts[i]>maxi){
                    maxi=gifts[i];
                    ind=i;
                }
            }
            gifts[ind]=floor(sqrt(gifts[ind]));
            --k;

        }

        long long ans=0;
        for(int i=0;i<n;i++){
            ans+=gifts[i];
        }
        return ans;
    }
};