class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
     if(right.size()==n||left.size()==n)
     return  n;
     int maxi=INT_MIN,mini=INT_MAX;
     for(int i=0;i<left.size();i++){
            maxi=max(maxi,left[i]);
     }
     for(int i=0;i<right.size();i++){
            mini=min(mini,right[i]);
     }

        return max(maxi,n-mini);



    }
};