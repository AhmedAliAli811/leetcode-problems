class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
            product = 1
            answer = []
            zero = 0
            for num in nums:
                if num :
                    product *= num
                else :
                    zero += 1
            if zero > 1:
                return [0] * len(nums)
            for num in nums:
                if zero == 0:
                    answer.append(int(product / num ))
                else :
                    if num == 0 :
                        answer.append(product)
                    else:
                        answer.append(0)

            return answer
        