class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int *i=new int;
        int *j=new int;
        int *n=new int;
        *i=*j=0;
        *n=arr.size();
        while(*j<*n){
            if(arr[*j]!=0){
                swap(arr[*i],arr[*j]);
                    *i+=1;
                
            } 
            *j+=1;
        }
    }
};