class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        k = 1
        lst = 1
        cnt = 1
        for i in range(1, len(nums)):
            if nums[i] != nums[i - 1]:
                nums[lst] = nums[i]
                lst += 1
                k+=1
                cnt = 1
            elif cnt < 2 :
                nums[lst] = nums[i]
                lst += 1
                k+=1
                cnt += 1




        # print(k, " --------  ", nums)
        return k