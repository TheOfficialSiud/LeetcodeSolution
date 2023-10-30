class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
       
        //sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++){
             bool t=true;
                for(int j=0;j<n-i-1;j++){
                    int t1=__builtin_popcount(arr[j]);
                    int t2=__builtin_popcount(arr[j+1]);
                    if(t1>t2){
                    swap(arr[j],arr[j+1]);
                    t=false;}
                    else if(t1==t2){
                        if(arr[j]>arr[j+1]){
                                     swap(arr[j],arr[j+1]);
                                     t=false;
                        }
                           
                    }
                 
                }
                   if(t)
                    break;
        }
        return arr;
    }
};