class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maxi=*max_element(arr.begin(),arr.end());
        int i=0;
        while(arr[i]!=maxi){
            i++;
        }
        return i;
    }
};