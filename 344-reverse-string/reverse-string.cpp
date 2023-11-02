class Solution {
public:
    inline void reversing(vector<char>& s,int i,int j){
            if(i>=j)
            return;
            swap(s[i],s[j]);
            return reversing(s,++i,--j);
    }
    void reverseString(vector<char>& s) {
      reversing(s,0,s.size()-1);
    }
};