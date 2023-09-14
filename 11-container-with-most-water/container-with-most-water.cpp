class Solution {
public:
    int maxArea(vector<int>& h) {
        int i=0,j=h.size()-1,maxi=INT_MIN;
        while(i<j){
            int temp=((j+1)-(i+1))*min(h[i],h[j]);
            maxi=max(temp,maxi);
            if(h[i]<h[j]){
                i++;
            }
            else if(h[j]<h[i]){
                j--;
            }
            else{
                i++;
                j--;
            }

        }
        return maxi;
    }
};