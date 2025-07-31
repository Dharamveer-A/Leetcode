# Last updated: 31/07/2025, 11:47:59
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        ans=0
        for i in nums:
            ans^=i
        return ans
        