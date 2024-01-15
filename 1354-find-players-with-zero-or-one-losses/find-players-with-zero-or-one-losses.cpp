class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> win,loss;

        int n=matches.size();
        vector<int> nolose,exactlyonelose;

        for(int i=0;i<n;i++){
            win[matches[i][0]]++;
            loss[matches[i][1]]++;
        }

        for(auto it:win){
            if(loss[it.first]==0)
            nolose.push_back(it.first);

        }

        for(auto it:loss){
            if(it.second==1)
            exactlyonelose.push_back(it.first);

        }

        return {nolose,exactlyonelose};

    }
};