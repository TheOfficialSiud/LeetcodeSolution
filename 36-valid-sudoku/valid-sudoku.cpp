class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //for row
        for(int i=0;i<9;i++){
            map<char,int> mp;
            for(int j=0;j<9;j++){
                if((board[i][j]!='.')&&(board[i][j]!=',')){
                    mp[board[i][j]]++;
                    if(mp[board[i][j]]>1){
                        // cout<<board[i][j]<<" "<<mp[board[i][j]]<<" ";
                        return false;
                    }
                    
                }
            }
        }
        
        //f0r column
        for(int i=0;i<9;i++){
            map<char,int> mp;
            for(int j=0;j<9;j++){
                if((board[j][i]!='.')&&(board[j][i]!=',')){
                    mp[board[j][i]]++;
                    if(mp[board[j][i]]>1){
                            cout<<board[i][j]<<" "<<mp[board[i][j]]<<" ";
                    return false;
                    }
                }
            }
        }
    // int p=3,q=3,m=0,n=0;
    // while(p){
    //     while(q){
    //     map<char,int> mp;
    //     for(int i=m;i<3+m;i++){
    //         for(int j=n;j<3+n;j++){

    //         }
    //     }
    // }
    // }
// |grid 1 grid 4 grid 7|
// |grid 2 grid 5 grid 8|
// |grid 3 grid 6 grid 9|
 map<char,int> mp;
    // for grid 1
    for(int i=0;i<3;i++){
       
        for(int j=0;j<3;j++){
            if((board[i][j]!='.')&&(board[i][j]!=',')){
                    mp[board[i][j]]++;
                    if(mp[board[i][j]]>1)
                    return false;
                }
        }
    }
     mp.clear();
     // for grid 2
    // map<char,int> mp;
    for(int i=0+3;i<3+3;i++){
        for(int j=0;j<3;j++){
            if((board[i][j]!='.')&&(board[i][j]!=',')){
                    mp[board[i][j]]++;
                    if(mp[board[i][j]]>1)
                    return false;
                }
        }
    }
     mp.clear();
     // for grid 3
    for(int i=3+3;i<3+3+3;i++){
        for(int j=0;j<3;j++){
            if((board[i][j]!='.')&&(board[i][j]!=',')){
                    mp[board[i][j]]++;
                    if(mp[board[i][j]]>1)
                    return false;
                }
        }
    }
     mp.clear();
     // for grid 4
    for(int i=0;i<3;i++){
        for(int j=0+3;j<3+3;j++){
            if((board[i][j]!='.')&&(board[i][j]!=',')){
                    mp[board[i][j]]++;
                    if(mp[board[i][j]]>1)
                    return false;
                }
        }
    }
     mp.clear();
     // for grid 5
    for(int i=0+3;i<3+3;i++){
        for(int j=0+3;j<3+3;j++){
            if((board[i][j]!='.')&&(board[i][j]!=',')){
                    mp[board[i][j]]++;
                    if(mp[board[i][j]]>1)
                    return false;
                }
        }
    }
     mp.clear();
    // for grid 6
    for(int i=3+3;i<3+3+3;i++){
        for(int j=0+3;j<3+3;j++){
            if((board[i][j]!='.')&&(board[i][j]!=',')){
                    mp[board[i][j]]++;
               
                    if(mp[board[i][j]]>1)
                    return false;
                }
        }
    }
    mp.clear();
    // for grid 7
    // map<char,int> mp;
     for(int i=0;i<3;i++){ 
        for(int j=0+3+3;j<3+3+3;j++){
             cout<<board[i][j]<<" ";
            if((board[i][j]!='.')&&(board[i][j]!=',')){
                    mp[board[i][j]]++;
                    cout<<board[i][j]<<" "<<mp[board[i][j]]<<endl;
                    if(mp[board[i][j]]>1)
                    return false;
                }
        }
        cout<<endl;
    }
    mp.clear();
     // for grid 8
    for(int i=0+3;i<3+3;i++){
        for(int j=0+3+3;j<3+3+3;j++){
            if((board[i][j]!='.')&&(board[i][j]!=',')){
                    mp[board[i][j]]++;
                    if(mp[board[i][j]]>1)
                    return false;
                }
        }
    }
     mp.clear();

     // for grid 9
    for(int i=3+3;i<3+3+3;i++){
        for(int j=0+3+3;j<3+3+3;j++){
            if((board[i][j]!='.')&&(board[i][j]!=',')){
                    mp[board[i][j]]++;
                    if(mp[board[i][j]]>1)
                    return false;
                }
        }
    }
     mp.clear();

    return true;

}

};