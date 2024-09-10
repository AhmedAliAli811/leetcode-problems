class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        all_triples = set()
        nums.sort()
        for i in range (len(nums)):
            l  , r = i + 1 , len(nums) - 1
            while l < r :
                total = nums[i] + nums[l] + nums[r]
                if not total:
                    lst = [nums[i], nums[l] , nums[r]]
                    lst.sort()
                    all_triples.add((lst[0] , lst[1] , lst[2]))
                    l += 1
                    r -= 1
                elif total > 0 :
                    r -= 1
                else :
                    l += 1
    
        ans = []
        for i in all_triples:
            ans.append(list(i))
        return ans