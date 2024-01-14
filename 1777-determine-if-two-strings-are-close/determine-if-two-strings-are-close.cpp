class Solution {
public:
    bool closeStrings(string word1, string word2) {
       vector<int> one(26,0),two(26,0);

       int n1=word1.length(); 
       int n2=word2.length(); 

        if(n1!=n2)
        return 0;

        for(int i=0;i<n1;i++){
            one[word1[i]-'a']++;
        }

        for(int i=0;i<n2;i++){
            two[word2[i]-'a']++;
            if(one[word2[i]-'a']==0)
            return 0;
        }
        sort(one.begin(),one.end());
        sort(two.begin(),two.end());

        return (one==two);
       
    }
};