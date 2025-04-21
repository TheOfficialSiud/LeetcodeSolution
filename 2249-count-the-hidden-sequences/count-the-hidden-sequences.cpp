class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {


        int curr_min=0;
        int curr_max=0;
        int n=differences.size();

        long long sum=0;

        for(int i=0;i<n;i++){
            sum+=differences[i];
            if(sum<INT_MIN||sum>INT_MAX)
            continue;
            curr_min=min(curr_min,int(sum));
            curr_max=max(curr_max,int(sum));
        }
        // cout<<curr_min<<" "<<curr_max;

        long long upp=upper-curr_max;
        long long lo=(long)lower- (long)curr_min;
        

        int cnt=upp-lo+1;

        if(cnt>0)
            return cnt;
            
            else return 0;




        
        
    }
};