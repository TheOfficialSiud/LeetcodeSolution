class Solution {
public:
    int binarysearch(vector<int>& n,int i,int j,int target){
        int mid=(i+j)/2;
        if(i>j)
        return -1;
        if(n[mid]==target)
        return mid;
        if(n[mid]<target)
        return binarysearch(n,mid+1,j,target);
        else
        return binarysearch(n,i,mid-1,target);
    }
    int search(vector<int>& n, int t) {
       return binarysearch(n,0,n.size()-1,t);

    }
};