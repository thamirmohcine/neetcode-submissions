class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        group = {}

        for _str in strs:
            count = [0] * 26

            for char in _str:
                count [ord(char) - ord('a')] += 1
            key = str(count)
            group.setdefault(key, []).append(_str)
        return list(group.values())

        