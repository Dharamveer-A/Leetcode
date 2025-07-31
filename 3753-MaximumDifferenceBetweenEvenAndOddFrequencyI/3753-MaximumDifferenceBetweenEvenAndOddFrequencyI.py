# Last updated: 31/07/2025, 10:31:56
class Solution(object):
    def maxDifference(self, s):
        """
        :type s: str
        :rtype: int
        """
        c=Counter(s)
        v=c.values()
        max_odd=max(i for i in v if i%2==1)
        min_even=min(i for i in v if i%2==0)
        return max_odd-min_even