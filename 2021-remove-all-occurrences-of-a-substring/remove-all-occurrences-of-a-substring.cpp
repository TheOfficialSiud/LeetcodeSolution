class Solution {
public:
    string removeOccurrences(string s, string part) {
        size_t f=s.find(part);
        while(f<s.length()&&s.length()!=0){
            s.erase(f,part.length());
            f=s.find(part);
        }
        return s;
    }
};