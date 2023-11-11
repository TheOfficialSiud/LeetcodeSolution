class Solution {
public:
    int minAddToMakeValid(string s) {
        int closebracket=0;
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    closebracket++;
                }
                else{
                    st.pop();
                }
            }
        }
        return closebracket+st.size();
    }
};