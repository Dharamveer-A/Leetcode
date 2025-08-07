# Last updated: 07/08/2025, 19:32:53
class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        hash_dict = {}
        for i,v in enumerate(nums):
            diff = target-v
            if diff in hash_dict and nums.index(diff)!=i  : 
                return hash_dict[diff],i
            hash_dict[v]=i
        