class Solution:
    def canJump(self, nums: List[int]) -> bool:
        sumnow = 0
        for num in nums:
            if sumnow < 0:
                return False
            if sumnow < num:
                sumnow = num
            sumnow -= 1
        return True