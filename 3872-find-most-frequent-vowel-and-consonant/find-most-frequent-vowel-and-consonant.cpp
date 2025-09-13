class Solution {
public:
    bool isVowel(char c){
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    }
    int maxFreqSum(string s) {
        vector<int> vec(26,0);
        int maxv=0,maxc=0;

        for(int i=0;i<s.length();i++){
            vec[s[i]-'a']++;
            if(isVowel(s[i])){
                maxv=max(maxv,vec[s[i]-'a']);
            }
            else{
                maxc=max(maxc,vec[s[i]-'a']);
            }

        }


        return maxc+maxv;
    }
};