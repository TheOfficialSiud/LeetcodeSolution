class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        int i=0;
        int n=s.length();
        

        while(i<n){
            if(!st.empty()&&st.top()==s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
            i++;
        }

        string ans="";

        while(!st.empty()){
            ans=ans+st.top();
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};