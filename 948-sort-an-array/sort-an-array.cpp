class Solution {
public:
    // void selctionsort(vector<int> &arr,int i,int n){
    //     if(i==n-1)
    //     return;
    //     for(int j=i;j<n;j++){
    //         if(arr[i]>arr[j])
    //         swap(arr[i],arr[j]);
    //     }
    //     return selctionsort(arr,++i,n);
    // }
    // void bubblesort(vector<int> &arr,int i,int n){
    //     if(i==n-1)
    //     return;
    //     for(int j=0;j<n-i-1;j++)
    //     {
    //         if(arr[j]>arr[j+1])
    //         swap(arr[j],arr[j+1]);
    //     }
    //     return bubblesort(arr,++i,n);
    // }

    void mergearray(vector<int>&arr, int s, int e){

        //now going to merge the sorted array
        int mid=(s+e)/2;
        int len1=mid-s+1;//length of 1st array;
        int len2=e-mid; //length of 2nd array;

        int mainarrayindex=s;
        int *arr1=new int[len1];
        int *arr2=new int[len2];

        for(int i=0;i<len1;i++){
                arr1[i]=arr[s++];
        } 
        s=mid+1;
        for(int i=0;i<len2;i++){
                arr2[i]=arr[s++];
        }

        int index1=0,index2=0;

        while(index1<len1||index2<len2){

            if(index1>=len1){
                arr[mainarrayindex++]=arr2[index2++];
            }
            else if(index2>=len2){
                arr[mainarrayindex++]=arr1[index1++];
            }
            else {
                    if(arr1[index1]<arr2[index2]){
                        arr[mainarrayindex++]=arr1[index1++];
                    }
                    else{
                        arr[mainarrayindex++]=arr2[index2++];
                    }
            }

        }
    }

    void mergesort(vector<int> &arr,int s,int e){
        if(s>=e)
        return;
        int mid=(s+e)/2;
        //left vala part
        mergesort(arr,s,mid);
        //right vala part
        mergesort(arr,mid+1,e);

        //Now start merging the arrays after they are divided into single - single part

        mergearray(arr,s,e);
    
    }


    vector<int> sortArray(vector<int>& arr) {
      //bubblesort(arr,0,arr.size());
      mergesort(arr,0,arr.size()-1);
      return arr;
    }
};