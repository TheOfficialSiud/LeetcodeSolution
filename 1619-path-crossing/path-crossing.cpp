class Solution {
public:
struct PairHash {
    template <class T1, class T2>
    size_t operator () (const pair<T1, T2>& p) const {
        auto h1 = hash<T1>{}(p.first);
        auto h2 = hash<T2>{}(p.second);

        return h1 ^ h2;
    }
};
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
        unordered_map<pair<int,int>,int, PairHash> mp;
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