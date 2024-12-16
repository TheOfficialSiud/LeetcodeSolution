class Solution {
public:
    vector<int> getFinalState(vector<int>& v, int k, int m) {

        while(k){
            v[min_element(v.begin(), v.end())-v.begin()]*=m;
             --k;
        }

        return v;
    }
};