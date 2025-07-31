# Last updated: 31/07/2025, 11:47:34
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