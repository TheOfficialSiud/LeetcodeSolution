class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string a="QqWwEeRrTtYyUuIiOoPp",b="AaSsDdFfGgHhJjKkLl",c="ZzXxCcVvBbNnMm";
        // sort(a.begin(),a.end());
        // sort(b.begin(),b.end());
        // sort(c.begin(),c.end());
        vector<string> ans;
        for(int i=0;i<words.size();i++){
            int count=0;
            // string s=words[i];
            bool a1=false,b1=false,c1=false;
            if(a.find(words[i][0])!=string::npos){
                     a1=true;
            }
           
            if(b.find(words[i][0])!=string::npos){
                    b1=true;
                    cout<<words[i][0];
            }
            
            if(c.find(words[i][0])!=string::npos)
            c1=true;
            for(int j=0;j<words[i].length();j++){
                if(a1){
                    // cout<<1;
                    for(int k=0;k<a.length();k++){
                        if(words[i][j]==a[k]){
                        count++;
                        // cout<<words[i][j];
                        }
                    }
                }
                if(b1){
                    cout<<1;
                    for(int k=0;k<b.length();k++){
                        if(words[i][j]==b[k])
                        count++;
                    }
                }
                if(c1){
                    for(int k=0;k<c.length();k++){
                        if(words[i][j]==c[k])
                        count++;
                    }
                }
            }
            cout<<count;
            if(count==words[i].length())
            ans.push_back(words[i]);
        }

        // cout<<a;
        return ans;
    }
};