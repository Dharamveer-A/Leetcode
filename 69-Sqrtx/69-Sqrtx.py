# Last updated: 07/08/2025, 19:32:36
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
        