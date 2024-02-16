class Solution {
public:
bool cmp(pair<string, int>& a, 
        pair<string, int>& b) 
{ 
    return a.second < b.second; 
} 
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        vector<pair<int,int>> freq;
        for(auto it:mp){
            freq.push_back({it.second,it.first});
        }

        sort(freq.begin(),freq.end());

        // for(int i=0;i<freq.size();i++){
        //     cout<<freq[i].first<<" "<<freq[i].second<<endl;
        // }

        int ans=freq.size();

        for(int i=0;i<freq.size();i++){
            if(freq[i].first<=k)
            {
                --ans;
                k-=freq[i].first;
            }
            else
            return ans;
        }

        return ans;

        
    }
};