class Solution {
public:

    void merge(vector<int> &arr,int s,int e){
        int mid=(s+e)/2;
        int len1=mid-s+1;
        int len2=e-mid;
        int mainindex=s;

        int *arr1=new int[len1];
        int *arr2=new int[len2];

        for(int i=0;i<len1;i++){
            arr1[i]=arr[s++];
        }
        
        for(int i=0;i<len2;i++){
            arr2[i]=arr[s++];
        }

        int index1=0,index2=0;

        while(index1<len1||index2<len2){
            if(index1>=len1){
                arr[mainindex++]=arr2[index2++];
            }
            else if(index2>=len2){
                arr[mainindex++]=arr1[index1++];
            }
            else{
                if(arr1[index1]<arr2[index2]){
                    arr[mainindex++]=arr1[index1++];
                }
                else{
                    arr[mainindex++]=arr2[index2++];
                }
            }
        }
    }

    void mergesort(vector<int> &arr,int s,int e){
        if(s>=e)
        return;
        int mid=(s+e)/2;

        mergesort(arr,s,mid);
        mergesort(arr,mid+1,e);

        merge(arr,s,e);

    }
    vector<int> sortArray(vector<int>& nums) {
      mergesort(nums,0,nums.size()-1);
      return nums;  
    }
};