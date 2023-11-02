class Solution {
public:
    void reversing(vector<char>& s,int i){
            if(i>=s.size()/2)
            return;
            swap(s[i],s[s.size()-1-i]);
            return reversing(s,++i);
    }
    void reverseString(vector<char>& s) {
      reversing(s,0);
    }
};