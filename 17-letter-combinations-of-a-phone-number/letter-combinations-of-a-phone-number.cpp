class Solution {
private:
    void combination(vector<string>&ans, string output,string digits,string mapping[],int i){
        if(i>=digits.length())
        {
            ans.push_back(output);
            return;
        }
        string temp=mapping[digits[i]-'0'];
        for(int j=0;j<temp.length();j++){
            output.push_back(temp[j]);
            combination(ans,output,digits,mapping,i+1);
            output.pop_back();
        }
    }
    public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0)
        return ans;
        string output="";
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        combination(ans,output,digits,mapping,0);
        return ans;
    }
};