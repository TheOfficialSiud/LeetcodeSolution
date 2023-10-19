class Solution {
public:

   inline bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())
        return false;
        
        
        int n=s1.length();
        vector<int> fir(26,0);
        for(int i=0;i<n;i++){
            fir[s1[i]-'a']++;
        }
       
        for(int i=0;i<=s2.length()-n;i++){
            vector<int> sec(26,0);
            for(int j=i;j<i+n;j++){
            sec[s2[j]-'a']++;
        }
        if(fir==sec){
        return true;
       }
        }

        return false;
    }
};