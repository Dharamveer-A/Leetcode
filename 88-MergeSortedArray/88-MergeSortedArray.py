# Last updated: 07/08/2025, 19:32:24
class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        for i in range(len(nums2)):
            nums1[m+i]=nums2[i]
        nums1.sort()
        return nums1