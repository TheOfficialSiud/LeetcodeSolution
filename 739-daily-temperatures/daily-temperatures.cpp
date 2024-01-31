class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& tp) {
        stack<int> st;
        int n=tp.size();

        st.push(n-1);
        vector<int> ans(n,0);
        for(int i=n-2;i>=0;i--){
                while(!st.empty()&&tp[i]>=tp[st.top()]){
                        st.pop();      
                }
                if(st.empty()){
                    ans[i]=0;
                   
                }
                else{
                    ans[i]=st.top()-i;

                }
                 st.push(i);
        }

        return ans;

    }
};