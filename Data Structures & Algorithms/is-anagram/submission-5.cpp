class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        std::ranges::sort(s.begin(), s.end());
        std::ranges::sort(t.begin(), t.end());
        return (s == t); 
    }
};
