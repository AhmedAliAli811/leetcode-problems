class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        final_result = 0
        ans = 0
        for i in range(len(s)):
            chars = set()
            chars.add(s[i])
            substring = s[i]
            ans = 1

            for j in range(i+1 , len(s)):
                substring += s[j]
                chars.add(s[j])
                if len(substring) == len(chars) :
                    ans = max(ans , len(substring))
                else:
                    break
            final_result = max(ans , final_result)
        return final_result