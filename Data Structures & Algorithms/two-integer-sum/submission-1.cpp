class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> s;
        for (int i(0);i < nums.size();i++){
            for (int j(i+1); j < nums.size();j++){
                if (nums[j] + nums[i] == target)
                    return (std::vector<int>{i, j});
            }
        }
        return s;
    }
};
