class Solution {
public:

    bool special(string s){
        vector<int> a(26,0);
        int c=0;
        for(int i=0;i<s.length();i++){
            a[s[i]-'a']++;
        }

        for(int i=0;i<26;i++){
            if(a[i]!=0)
            c++;
        }

        return (c==1);
    }

    bool occur(int x,int n,string s){
        unordered_map<string,int> ump;

        for(int i=0;i<=n-x;i++){
            string temp=s.substr(i,x);
            ump[temp]++;
            if(ump[temp]>=3)
            {
                //cout<<temp<<endl;
                if(special(temp))
                return true;
            }
        }
        return false;

    }

    int maximumLength(string s) {
        int maxi=-1;
        int n=s.length();
        for(int i=1;i<n;i++){
            if(occur(i,n,s))
            maxi=max(maxi,i);
        }

        return maxi;
    }
};