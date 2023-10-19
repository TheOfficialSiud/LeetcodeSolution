class Solution {
public:
   int binarysearch(vector<int> arr,int s,int e,int target){
       int mid=(s+e)/2;
       while(s<=e){
           if(arr[mid]==target)
           return mid;
           else if(arr[mid]<target)
           s=mid+1;
           else
           e=mid-1;
           mid=(s+e)/2;
       }
       return -1;
   }
    int search(vector<int>& arr, int target) {
        int i=0,j=arr.size()-1,mid=(i+j)/2;
        while(i<j){
            if(arr[mid]>=arr[0]){
                i=mid+1;
            }
            else{
                j=mid;
            }
            mid=(i+j)/2;
        }
        int pivot=i;
        cout<<pivot;
        int ans=binarysearch(arr,pivot,arr.size()-1,target);
        //cout<<ans;
        if(ans==-1)
        ans=binarysearch(arr,0,pivot-1,target);
        return ans;;
    }
};