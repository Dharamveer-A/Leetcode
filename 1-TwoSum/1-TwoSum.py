# Last updated: 31/07/2025, 11:48:27
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
        