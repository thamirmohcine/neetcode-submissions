class Solution {
public:
    bool isAnagram(string s, string t) {
        std::ranges::sort(s.begin(), s.end());
        std::ranges::sort(t.begin(), t.end());
        return (s == t); 
    }
};
