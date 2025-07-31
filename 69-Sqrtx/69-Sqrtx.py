# Last updated: 31/07/2025, 11:48:11
class Solution(object):
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        k=0
        while k*k<x:
            k+=1
        if k*k==x: return k
        else : return k-1
        