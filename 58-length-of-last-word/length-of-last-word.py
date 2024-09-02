class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        while len(s) and s[-1] ==' ':
            s = s[:len(s)-1]
        s = reversed(s)

        ans = 0
        for char in s:
            if char == ' ':
                break
            else:
                ans += 1
        return ans