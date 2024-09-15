class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        map = {}
        longest = 0
        left = 0
        for i in range(len(s)):
            if s[i] in map:
                left = max(left , map[s[i]] + 1)
                map[s[i]] = i
            map[s[i]] = i
            longest = max(longest , i - left + 1 )
        return longest