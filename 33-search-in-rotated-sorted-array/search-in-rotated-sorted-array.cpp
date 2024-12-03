class Solution {
public:

    int pivot_calc(vector<int>& arr){
        int s=0,e=arr.size()-1;
        int mid=(s+e)/2;

        while(s<e){
             
            if(arr[mid]>=arr[0]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=(s+e)/2;
        }
        return mid;
    }
    int binary_srch(int s,int e,vector<int>& arr,int target){
        int mid=0;
        while(s<=e){
            mid=(s+e)/2;
            if(arr[mid]==target){
                cout<<"s";
                return mid;
            }
            else if(arr[mid]<target){
                s=mid+1;
            }
            else
                e=mid-1;
        }

        return -1;

    }

    int search(vector<int>& nums, int target) {

        int pivot=pivot_calc(nums);
        cout<<pivot;
        
        int ind1,ind2;

        ind1=binary_srch(0,pivot-1,nums,target);
        if(ind1==-1){
        ind2=binary_srch(pivot,nums.size()-1,nums,target);
        return ind2;}
        else
        return ind1;

    }
};