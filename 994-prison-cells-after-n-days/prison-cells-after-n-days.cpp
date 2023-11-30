class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int n1) {
        int n=cells.size();
        if(n1%14==0)
        n1=14;
        else
        n1=n1%14;
        set<vector<int>> st;
        while(n1){
            vector<int> tmp;
        for(int i=1;i<n-1;i++){
            if(cells[i-1]==cells[i+1]){
                tmp.push_back(i);
            }
        }
            int l=0;
            for(int j=0;j<n;j++){
                if(l<tmp.size()&&j==tmp[l]){
                    cells[j]=1;
                    l++;
                }
                else{
                    cells[j]=0;
                }
            }
            --n1;
            for(int i=0;i<n;i++){
                cout<<cells[i]<<" ";
            }
            st.insert(cells);
            cout<<st.size()<<endl;
        }
        
        return cells;
    }
};