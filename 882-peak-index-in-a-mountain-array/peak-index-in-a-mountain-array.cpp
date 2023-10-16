class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();

        int maxi=*max_element(arr.begin(),arr.end());
        int i=0;
        while(arr[i]!=maxi){
            // if(arr[i]>=arr[i+1]){
            //     return 0;
            // }
            i++;
        }
        return i;
    }
};