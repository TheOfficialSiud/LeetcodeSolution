class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        if(nums.size()==1)
        return 1;
        sort(nums.begin(),nums.end());
        int maxi=1,j=1;
        for(int i=1;i<nums.size();i++){
            int m=nums[i]-nums[i-1];
            if(m==0)
            continue;
            if(m==1){
                j++;  
            }
            else{ 
                j=1;
                    }
            
            maxi=max(j,maxi);
            //  cout<<m<<" "<<j<<" "<<maxi<<endl;
        }
        return maxi;
       
    }
};