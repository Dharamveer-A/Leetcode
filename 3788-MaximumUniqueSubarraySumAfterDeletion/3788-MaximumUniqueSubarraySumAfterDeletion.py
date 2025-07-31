# Last updated: 31/07/2025, 10:33:27
class Solution(object):
    def maxSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        num=[i for i in set(nums) if i>0]
        return max(nums) if len(num)==0 else sum(num)