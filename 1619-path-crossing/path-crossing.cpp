class Solution {
public:
    bool isPathCrossing(string path) {
        // int Nans=0,Eans=0;
        // for(int i=0;i<path.length();i++){
        //     if(path[i]=='N'){
        //         Nans++;
        //     }
        //     else if(path[i]=='S'){
        //         Nans--;
        //     }
        //     else if(path[i]=='E'){
        //         Eans++;
        //     }
        //     else if(path[i]=='W'){
        //         Eans--;
        //     }
        //     if(Nans==0&&Eans==0){
        //         return 1;
        //     }
        // }
        // return 0;

        // int x=0,y=0;
        // set<pair<int,int>> st;
        // st.insert({x,y});
        // for(int i=0;i<path.length();i++){
        //       if(path[i]=='N'){
        //         y++;
        //     }
        //     else if(path[i]=='S'){
        //         y--;
        //     }
        //     else if(path[i]=='E'){
        //         x++;
        //     }
        //     else if(path[i]=='W'){
        //         x--;
        //     }
        //     int temp=st.size();
        //     st.insert({x,y});
        //     if(temp==st.size())
        //     return 1;
        // }

        // return 0;


        int x=0,y=0;
        map<pair<int,int>,int> mp;
        mp[{x,y}]++;
        for(int i=0;i<path.length();i++){
              if(path[i]=='N'){
                y++;
            }
            else if(path[i]=='S'){
                y--;
            }
            else if(path[i]=='E'){
                x++;
            }
            else if(path[i]=='W'){
                x--;
            }
           if(mp[{x,y}]>=1)
           return 1;
           mp[{x,y}]++;
        }

        return 0;
        
    }
};