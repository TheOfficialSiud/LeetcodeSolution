class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
      unordered_map<int,int> mp;
      for(int i=0;i<nums.size();i++){
          mp[nums[i]]++;
      } 

      vector<vector<int>> ans;
        bool flag;

      do{
      vector<int> temp;
      flag=false;
      for(auto it:mp){
          
          if(it.second>0){
              temp.push_back(it.first);
              mp[it.first]--;
              if(mp[it.first]>0)
                flag=true;
          }
      } 
      ans.push_back(temp);
    }while(flag);

    return ans;
    }
};