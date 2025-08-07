# Last updated: 07/08/2025, 19:30:56
class Solution(object):
    def maxSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        num=[i for i in set(nums) if i>0]
        return max(nums) if len(num)==0 else sum(num)