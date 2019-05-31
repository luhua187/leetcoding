class Solution(object):
    def maxProfit(self, prices):
        if len(prices) == 0:
            return 0
        ans, mins = 0, prices[0]
        for i in prices:
            if i > mins:
                ans = max(ans, i-mins)
            else:
                mins = i
        return ans