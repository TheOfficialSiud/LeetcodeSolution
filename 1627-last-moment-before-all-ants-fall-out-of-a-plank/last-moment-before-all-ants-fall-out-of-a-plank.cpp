class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
     if(right.size()==n||left.size()==n)
     return  n;

    int n1=left.size(),n2=right.size();
    int i=0,j=0;
    int maxi=INT_MIN,mini=INT_MAX;

    while(i<n1||j<n2){
        if(i!=n1){
             maxi=max(maxi,left[i]);
             i++;
        }
        if(j!=n2){
             mini=min(mini,right[j]);
             j++;
        }
    }
        return max(maxi,n-mini);



    }
};