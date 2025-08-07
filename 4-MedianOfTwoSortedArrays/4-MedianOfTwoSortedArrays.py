# Last updated: 07/08/2025, 19:32:51
class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        nums1=nums1+nums2
        nums1.sort()
        if len(nums1)%2==0: return (nums1[(len(nums1)-1)//2]+float(nums1[len(nums1)//2]))/2
        else: return nums1[len(nums1)//2]
        