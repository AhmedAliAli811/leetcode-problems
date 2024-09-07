class Solution(object):
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """
        map = {
            1: "I",
            5: "V",
            4: "IV",
            10: "X",
            9: "IX",
            50: "L",
            40: "XL",
            100: "C",
            90: "XC",
            500: "D",
            400: "CD",
            1000: "M",
            900: "CM"
        }
        nums = sorted(list(map.keys()))
        nums.reverse()
        ans = ''
        for numm in nums:
            while num >= numm:
                ans += map[numm]
                num -= numm
        return ans