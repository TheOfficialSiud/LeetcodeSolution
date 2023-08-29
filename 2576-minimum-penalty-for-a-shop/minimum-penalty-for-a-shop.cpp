class Solution {
public:
    int bestClosingTime(string s) {
        int pen=0,loc=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='Y')
            pen++;
        }
        int temp=pen;
        for(int i=0;i<s.length();i++){
            if(s[i]=='Y'){
                temp--;
            }
            if(s[i]=='N'){
                temp++;
            }
            if(temp<pen)
            {
                loc=i+1;
                pen=temp;
            }
        }
        return loc;
    }
};