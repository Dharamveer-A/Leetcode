# Last updated: 07/08/2025, 19:31:29
class Solution(object):
    def findGCD(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        small=min(nums)
        large=max(nums)
        for i in range(small,1,-1):
            if large%i==0 and small%i==0 :
                return i
        return 1
