# Last updated: 07/08/2025, 19:32:26
class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        maxProfit=0
        bestBuy=float('inf')
        for i in prices:
            maxProfit= max([maxProfit,i-bestBuy])
            bestBuy = min([bestBuy, i])
        return maxProfit
        