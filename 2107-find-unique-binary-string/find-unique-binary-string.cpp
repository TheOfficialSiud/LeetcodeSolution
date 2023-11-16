class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int temp=stoi(nums[i],0,2);
            mp[temp]=-1;
        }
        int ansint;
        int t=nums[0].length();
        for(int i=0;i<pow(t,2)+1;i++){
            if(mp[i]==0){
                ansint=i;
                break;
            }
        }
        string ans="";
        cout<<ansint;
        while(n){
            if(ansint==0)
            ans+='0';
            else{
                // int 
                ans+=to_string(ansint%2);
                ansint/=2;
            }
            --n;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};