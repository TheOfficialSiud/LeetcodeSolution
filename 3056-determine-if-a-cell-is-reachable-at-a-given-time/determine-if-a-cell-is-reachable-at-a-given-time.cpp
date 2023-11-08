class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        // if(t==0){
        //     if(!(fx==sx&&fy==sy))
        //     return 0;
        // }
        // if((fx==sx&&fy==sy))
        //     return (t>1);
        // return ((fx+fy)-(sx+sy+t)<=2);

        int x_distance = abs(sx - fx);
        int y_distance = abs(sy - fy);
        int min_dist = min(x_distance, y_distance) + abs(y_distance - x_distance);
        if (min_dist == 0) {
            if (t == 1) {
                return false;
            } else {
                return true;
            }
        }
        return t >= min_dist;
    }
};