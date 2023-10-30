class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]=__builtin_popcount(arr[i]);
        }
        for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(mp[arr[j]]<mp[arr[i]])
                    swap(arr[j],arr[i]);
                    else if(mp[arr[j]]==mp[arr[i]]){
                        if(arr[i]>arr[j])
                            swap(arr[i],arr[j]);
                    }
                }
        }
        return arr;
    }
};