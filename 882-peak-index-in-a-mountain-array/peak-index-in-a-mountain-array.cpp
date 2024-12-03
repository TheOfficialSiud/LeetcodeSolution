class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
      int s=0,e=arr.size()-1;
        int mid=0,ans=0;

      while(s!=e){
         mid=(s+e)/2;
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else if(arr[mid]>arr[mid+1]){
            ans=mid;
            e=mid;
        }

        // cout<<arr[mid]<<" ";
      } 
      return ans; 
    }
};