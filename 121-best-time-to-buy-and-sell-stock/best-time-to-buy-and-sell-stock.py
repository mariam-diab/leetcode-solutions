class Solution(object):
    def maxProfit(self, prices):
        buy, sell, profit = 0, 1, 0
        while sell < len(prices):
            if prices[buy] < prices[sell]:
                profit = max(profit, prices[sell] - prices[buy])
            else:
                buy = sell
            sell += 1
        return profit