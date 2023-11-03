class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> stk;
        int index=0;
        int n1=target.size();
        for(int i=1; i<=n && index<n1 ;i++){
            if(target[index]==i){
                    stk.push_back("Push");
                    index++;
            }
            else{
                int c=0;
                while(i!=target[index] && i<=n){
                    c++;
                    stk.push_back("Push");
                    i++;
                }
                while(c){
                    stk.push_back("Pop");
                    --c;
                }
                stk.push_back("Push");
                index++;

            }
        }
        return stk;
    }
};