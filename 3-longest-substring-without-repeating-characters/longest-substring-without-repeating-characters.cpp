class Solution {
public:
    string modifier(string s,char c){
        int pos=-1;
        for(int i=0;i<s.length();i++){
            if(s[i]==c)
            {
                pos=i;
                break;
            }
        }
        if(pos!=-1){
             s=s.substr(pos+1);
        }
        s.push_back(c);
        return s;
    }
    int lengthOfLongestSubstring(string s) {
        int i=0;
        string ans="",temp="";
        
        for(int i=0;i<s.length();i++){
          temp=modifier(temp,s[i]);
          if(temp.length()>ans.length())
          ans=temp;
        }
        return ans.length();
    }
};