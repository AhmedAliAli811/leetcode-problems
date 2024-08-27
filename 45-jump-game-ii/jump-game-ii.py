class Solution:
    def jump(self, nums: List[int]) -> int:
        ind , cur , cnt = 0 , 0 , 0
        while ind < len(nums) - 1 :
            maxmm = 0
            for j in range(cur , ind + 1):
                maxmm = max(maxmm, j + nums[j])
            cur = ind + 1
            ind = maxmm
            cnt += 1
        return cnt