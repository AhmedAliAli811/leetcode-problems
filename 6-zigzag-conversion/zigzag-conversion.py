class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1:
            return s
        ans = ["" for _ in range (numRows)]
        down = 1
        i = 0
        for char in s :
            ans[i] += char
            if down == 1:
                i += 1
            else:
                i -= 1
            if i == 0 or i == numRows - 1:
                down = not down
        return "".join(ans)