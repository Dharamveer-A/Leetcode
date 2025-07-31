# Last updated: 31/07/2025, 11:47:44
class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n=max(nums)+1
        for i in range(n):
            if i not in nums:
                return i
        return n