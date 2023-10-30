class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
        //sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    int t1=__builtin_popcount(arr[j]);
                    int t2=__builtin_popcount(arr[i]);
                    if(t1<t2)
                    swap(arr[j],arr[i]);
                    else if(t1==t2){
                        if(arr[i]>arr[j])
                            swap(arr[i],arr[j]);
                    }
                }
        }
        return arr;
    }
};