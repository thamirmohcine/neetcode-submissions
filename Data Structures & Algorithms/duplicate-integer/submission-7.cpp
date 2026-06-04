class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> a(nums.begin(), nums.end());
        return a.size() != nums.size();
    }
};