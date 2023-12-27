class Solution {
public:
     int minCost(std::string colors, std::vector<int>& neededTime) {
        int n = colors.length();
        int i = 0, j = 0;
        int ans = 0;
        while (i < n) {
            while (j < n && colors[j] == colors[i])
                j++;
            int s = 0, m = INT_MIN;
            while (i < j) {
                s = s + neededTime[i];
                m = std::max(m, neededTime[i]);
                i++;
            }
            ans = ans + s - m;
            i = j;
        }
        return ans;
    }

};