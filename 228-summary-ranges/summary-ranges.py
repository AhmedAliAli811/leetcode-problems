class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        ans = []
        l = 0
        while l < len(nums):
            first = nums [l]
            while l + 1  < len(nums) and nums[l] == nums[l+1] -1 :
                l += 1
            if first == nums[l]:
                ans.append(f'{first}')
            else :
                ans.append(f'{first}->{nums[l]}')
            l += 1
    
        return ans