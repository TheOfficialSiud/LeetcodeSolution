class Solution {
public:
    int findNumbers(vector<int>& nums) {
      int res=0;

      for(int i=0;i<nums.size();i++){
        int temp=nums[i];
        int dig=0;

        while(temp!=0){
            temp=temp/10;
            dig+=1;
            // cout<<dig<<temp<<endl;
        }

        if(dig%2==0)
            res++;

      }  

      return res;
    }
};