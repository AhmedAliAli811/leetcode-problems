class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        if target in nums: return 1
        if sum(nums) < target: return 0
        l ,  r = 0 , 0
        sum_now = 0
        ans = -1
        for i in range(len(nums)):
            sum_now += nums[i]
            r += 1
            if sum_now >= target:
                if ans == -1: ans = r - l
                while sum_now >= target:
                    sum_now -= nums[l]
                    l += 1
                    ans = min(ans, r - l + 1 )
        return ans