class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return (s==t);
        // // while(next_permutation(s.begin(),s.end())){
        // //     if(s==t){
        // //         return true;
        // //     }
        // //     // if(s==NULL)
        // //     // return false;
        // //     // s=
        // // }
        // // return false;
        // map<char,int> mp;
        // for(int i=0;i<s.length();i++){
        //     mp[s[i]]++;
        // }
        // for(int i=0;i<t.length();i++){
        //     mp[t[i]]--;
        // }
        // for(auto it:mp){
        //     if(it.second!=0)
        //     return false;
        // }
        // return true;

    }
};