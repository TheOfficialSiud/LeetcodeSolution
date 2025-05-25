class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int i=0,j=0;
        unordered_map<char,int> mp;
        int n=s.length();
        int maxi=0,len=0;

        while(i<n){
            if(mp.find(s[i])==mp.end()){
             mp[s[i]]=i;
            len++;
            }
            else{
                j=max(mp[s[i]]+1,j);
                mp[s[i]]=i;
                len=i-j+1;
            }
           
            maxi=max(maxi,len);
           
            i++;
        }
       

        return maxi;


        
    }
};