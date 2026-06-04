class Solution {
public:
    bool isAnagram(string s, string t) {
        if (t.size() != s.size())
            return false ;
        for (size_t i(0);i < s.size();i++){
            int pos = t.find(s[i]);
            if (pos == std::string::npos)
                return false;
            t.erase(pos,1);
        }
        return true;
    }
};
