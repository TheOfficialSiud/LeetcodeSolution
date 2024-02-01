class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
            sort(nums.begin(), nums.end());

    int n = nums.size();
    vector<vector<int>> result;

    int i = 0;
    while (i < n) {
        // Create a new array
        vector<int> currentArray = {nums[i]};

        // Try to add two more elements to the current array
        int j;
        for (j = i + 1; j < n; ++j) {
            if (nums[j] - currentArray.back() <= k&&nums[j] - currentArray.front() <= k) {
                currentArray.push_back(nums[j]);

                // Check if the array size is 3
                if (currentArray.size() == 3) {
                    result.push_back(currentArray);
                    break;
                }
            } else {
                result.clear();
                break;
            }
        }

        // Move to the next unprocessed element
        i = j + 1;
    }
        int m=result.size();
        if(m*3!=n)
            return {};
        else
    return result;
        
    }
};