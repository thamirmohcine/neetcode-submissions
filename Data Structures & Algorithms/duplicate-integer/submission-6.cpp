class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> c;
        for (size_t i(0); i < nums.size();i++){
            c.insert(nums[i]);
        }
        if(c.size() != nums.size())
            return true;
        return false ;
    }
};