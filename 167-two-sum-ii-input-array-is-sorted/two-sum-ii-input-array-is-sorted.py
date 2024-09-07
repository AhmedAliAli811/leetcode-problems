class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        map = {}
        for i in range(len(numbers)):
            if numbers[i] not in map:
                map[numbers[i]] = []
            map[numbers[i]].append(i)
        for i in range(min(numbers) , max(numbers) + 1 ):
            for j in range(min(numbers) , max(numbers) + 1 ):
                if i in map and j in map:
                    if i + j == target:
                        if i == j and len(map[i])>1:
                            return [map[i][0] + 1 , map[i][1] + 1]
                        return [map[i][0] + 1 , map[j][0] + 1]