class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        selling_price = [0]*(len(prices) + 1)
        selling_price[len(prices)-1] = prices[-1]
        for i in range(len(prices)-2 , 0 , -1):
            selling_price[i] = max(selling_price[i+1], prices[i])
        profit = 0
        for i in range(len(prices)-1):
            profit = max(profit , selling_price[i+1] - prices[i])
        return profit
