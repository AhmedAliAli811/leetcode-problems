class Solution:
    def reverseWords(self, s: str) -> str:
        while s[len(s) - 1 ] == ' ':
            s = s[:-1]
        s = s[::-1]
        while s[len(s) - 1 ] == ' ':
            s = s[:-1]
        s = s[::-1]
        subs = ""
        words = []
        for char in s:
            if char != ' ':
                subs += char
            else:
                if len(subs):
                    words.append(subs)
                subs = ""
        words.append(subs)
        words.reverse()
        return ' '.join(words)
