# Last updated: 07/08/2025, 19:32:07
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