# Last updated: 31/07/2025, 11:47:33
class Solution(object):
    def countBits(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        ans=[]
        for i in range(n+1):
            ans.append(bin(i)[2:].count('1'))
        return ans