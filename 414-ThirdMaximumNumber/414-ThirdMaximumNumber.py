# Last updated: 07/08/2025, 19:31:56
class Solution(object):
    def thirdMax(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums=set(nums)
        if len(nums)<3: return max(nums)
        n=sorted(nums)
        return n[-3]