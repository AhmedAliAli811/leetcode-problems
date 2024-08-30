class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        gas_now = []
        for i in range(len(gas)):
            gas_now.append(gas[i] - cost[i])
        sum = 0
        ans = 0
        for i in range(len(gas_now)):
            sum += gas_now[i]
        if sum < 0 :
            return -1
        sum = 0

        for i in range(len(gas_now)):
            sum += gas_now[i]
            if sum < 0:
                ans = i + 1
                sum = 0
        return ans