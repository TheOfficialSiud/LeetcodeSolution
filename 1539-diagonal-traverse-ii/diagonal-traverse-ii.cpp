#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> findDiagonalOrder(std::vector<std::vector<int>>& nums) {
        int m = nums.size();
        int maxSum = 0, size = 0, index = 0;
        std::vector<std::vector<int>> mapping(100001);
        
        for (int i = 0; i < m; ++i) {
            size += nums[i].size();
            for (int j = 0; j < nums[i].size(); ++j) {
                int _sum = i + j;
                mapping[_sum].push_back(nums[i][j]);
                maxSum = std::max(maxSum, _sum);
            }
        }
        
        std::vector<int> res(size);
        for (int i = 0; i <= maxSum; ++i) {
            auto& cur = mapping[i];
            for (int j = cur.size() - 1; j >= 0; --j) {
                res[index++] = cur[j];
            }
        }
        
        return res;
    }
};