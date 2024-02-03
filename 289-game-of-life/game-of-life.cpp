class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        unordered_map<string,int> mp;

        int m=board.size();
        int n=board[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int live=0;
                    //horizontal neighbour
                    if(j-1>=0){
                        if(board[i][j-1]==1)
                        {
                            // cout<<"entered "<<board[i][j-1]<<" "<<i<<" "<<j-1<<endl;
                                live++;
                        }
                    }
                    if(j+1<n){
                        if(board[i][j+1]==1)
                        {
                                live++;
                        }
                    }

                    //vertical neighbour
                    if(i-1>=0){
                        if(board[i-1][j]==1)
                        {
                                live++;
                        }
                    }
                    if(i+1<m){
                        if(board[i+1][j]==1)
                        {
                                live++;
                        }
                    }

                    //for \ diagonal

                     if(i-1>=0&&j-1>=0){
                        if(board[i-1][j-1]==1)
                        {
                                live++;
                        }
                    }
                     if(i+1<m&&j+1<n){
                        if(board[i+1][j+1]==1)
                        {
                                live++;
                        }
                    }


                     //for / diagonal

                     if(i-1>=0&&j+1<n){
                        if(board[i-1][j+1]==1)
                        {
                                live++;
                        }
                    }
                    if(j-1>=0&&i+1<m){
                        if(board[i+1][j-1]==1)
                        {
                                live++;
                        }
                    }



                    // cout<<board[i][j]<<" "<<live<<endl;
                    string temp;
                            temp.push_back('0'+i);
                            temp.push_back('0'+j);
                    if(board[i][j]==1){
                         
                        if(live<2||live>3){
                            mp[temp]=0;
                        }
                    }
                    else{
                        if(live==3)
                        mp[temp]=1;
                    }


                
            }
        }

        for(auto it:mp){
            board[it.first[0]-'0'][it.first[1]-'0']=it.second;
        }
    }
};