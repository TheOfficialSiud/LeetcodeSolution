class Solution {
public:
    vector<int> getFinalState(vector<int>& v, int k, int m) {
        // priority_queue <int, vector<int>, greater<int>> hp;

        // for(auto it:nums){
        //     hp.push(it);
        // }

        // while(k){
        //     int temp=hp.top();
        //     hp.pop();
        //     hp.push(temp*m);
        //     --k;
        // }

        // vector<int> ans;

        // while(!hp.empty()){

        // }
        // return nums;

        while(k){
            int ind=min_element(v.begin(), v.end())-v.begin();

            v[ind]*=m;


            --k;
        }

        return v;
    }
};