class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        // // vector<map<char,int>> ans;
        //  vector<vector<string>> ans;
        // //  if(str.size()==1){
        // //     //  if(str[0]=="")
        // //      ans.push_back(str);
        // //      return ans;
        // //  }
        // vector<string> emp;
        // for(int i=0;i<str.size();i++){
        //     vector<string> temp;
        //     if(str[i]=="")
        //         {
        //             emp.push_back(str[i]);
        //             cout<<1;
        //             continue;
        //         }
        //     if(str[i]!="1"){
        //     temp.push_back(str[i]);
            
        //     for(int j=i+1;j<str.size();j++){
                
        //         string s=str[j];
        //         sort(s.begin(),s.end());
        //         if(s==str[i]){
        //             temp.push_back(str[j]);
        //             str[j]="1";
                     
        //             continue;
        //         }
        //             while(next_permutation(s.begin(),s.end())){
        //                 if(s==str[i])
        //                 {
        //                     temp.push_back(str[j]);
        //                     str[j]="1";
        //                     continue;
        //                 }
        //             }
                     
        //     }
        //     ans.push_back(temp);
        //     }
          
        // }
        // if(!emp.empty())
        // ans.push_back(emp);
        // return ans;
        map<string,vector<string>> mp;
        vector<vector<string>> ans;
        for(int i=0;i<str.size();i++){
            string s=str[i];
            sort(s.begin(),s.end());
            mp[s].push_back(str[i]);
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;

    }
};