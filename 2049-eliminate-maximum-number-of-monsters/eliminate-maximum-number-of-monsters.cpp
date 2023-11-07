class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int wpTime = 0, killCount = 0, sz = dist.size();
        priority_queue<int, vector<int>, greater<int>> reachTimes;
        for(int indx = 0; indx < sz; indx++){
            int timeToReach = (dist[indx] + speed[indx] - 1) / speed[indx];
            reachTimes.push(timeToReach);
        }
        while(!reachTimes.empty()){
            int currRTime = reachTimes.top();
            reachTimes.pop();
            if(wpTime >= currRTime && killCount > 0){
                return killCount;
            }else{
                killCount++;
            }
            wpTime++;
        }
        return killCount;
    }
};