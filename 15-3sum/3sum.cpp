class Solution {
public:
    vector<vector<int>> two_sum(int *i,int *j, int sum  ){
        cout<<*i<<*j<<" ";
        vector<vector<int>> answer;
        while(i<j){
            if(*i+*j==sum){
                answer.push_back({*i,*j});
              
            i++;
            --j;
                // cout<<1;
            }
            else if(*i+*j>sum)
            --j;
            else
            ++i;
        }
        return answer;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        map<vector<int>,int> ans;
        int i=0,j=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(i<j-1){
            // cout<<nums[i+1]<<" "<<nums[j];
            vector<vector<int>> temp=two_sum(&nums[i+1],&nums[j],0-nums[i]);

            if(!temp.empty()){
                for(int k=0;k<temp.size();k++){
                         temp[k].push_back(nums[i]);
                ans[temp[k]]++;
                }

            }
            i++;
        }
        vector<vector<int>> answer;
        for(auto it:ans){
            answer.push_back(it.first);
        }
        return answer;
    }
};