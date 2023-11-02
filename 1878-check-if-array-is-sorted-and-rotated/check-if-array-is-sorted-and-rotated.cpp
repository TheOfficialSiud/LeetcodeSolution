class Solution {
public:
    bool check(vector<int>& arr) {
     int c=0,n=arr.size();
     for(int i=1;i<n;i++){
         if(arr[i]<arr[i-1])
         c++;
     }
     if(arr[0]<arr[n-1])
     c++;
        cout<<c;
     return ((c==1)||(c==0));
    }
};