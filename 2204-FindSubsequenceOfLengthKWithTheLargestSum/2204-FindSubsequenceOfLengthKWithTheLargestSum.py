# Last updated: 07/08/2025, 19:31:20
class Solution(object):
    def maxSubsequence(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        n=len(nums)
        value=[[i,nums[i]] for i in range(n)]
        value.sort(key=lambda x: x[1],reverse=True)
        value=sorted(value[:k],key=lambda x: x[0])
        ans=[val for idx,val in value]
        return ans