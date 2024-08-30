class Solution:
    def trap(self, height: List[int]) -> int:
        max_prefix = [0]*len(height)
        max_suffix = [0]*len(height)
        max_prefix[0] = height[0]
        max_suffix[len(height)-1] = height[len(height)-1]
        for i in range(1 , len(height)):
            max_prefix[i] = max(max_prefix[i - 1] , height[i])
        for i in range(len(height)-2 , -1 , -1):
            max_suffix[i] = max(max_suffix[i+1] , height[i])
        ans = 0
        for i in range(len(height)):
            ans += min(max_prefix[i] , max_suffix[i]) - height[i]
        return ans 