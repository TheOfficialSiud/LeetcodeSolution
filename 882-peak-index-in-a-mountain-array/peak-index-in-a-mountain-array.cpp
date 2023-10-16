class Solution {
public:
   inline int peakIndexInMountainArray(vector<int>& arr) {
        //int maxi=*max_element(arr.begin(),arr.end());
        int i=0,j=arr.size()-1,mid=(i+j)/2;
        while(i<j){
            if(arr[mid]<arr[mid+1]){
                    i=mid+1;
            }
            else
            j=mid;
            mid=(i+j)/2;
        }
        return mid;
    }
};