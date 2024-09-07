class Solution(object):
    def fullJustify(self, words, maxWidth):
        """
        :type words: List[str]
        :type maxWidth: int
        :rtype: List[str]
        """
        ans = []
        line = []
        length = 0
        for word in words:
            if length + len(word) + len(line) > maxWidth:
                extra_space = maxWidth - length
                spaces = extra_space // max(1 , len(line) - 1)
                rem = extra_space % max(1 , len(line) - 1)
    
                for i in range (max(1 , len(line) - 1)):
                    line[i] += ' ' * spaces
                    if rem :
                        rem -= 1
                        line[i] += ' '
                ans.append("".join(line))
                line = []
                length = 0
            line.append(word)
            length += len(word)
        last_line = " ".join(line)
        extra_space = maxWidth - len(last_line)
        last_line += ' ' * extra_space
        ans.append(last_line)
        return ans