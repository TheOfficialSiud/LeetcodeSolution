class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> stk;
        for(auto it:s)
        stk.push(it);
        for(int i=0;i<s.size();i++){
            s[i]=stk.top();
            stk.pop();
        }
    }
};