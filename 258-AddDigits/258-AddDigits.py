# Last updated: 31/07/2025, 11:47:41
class Solution(object):
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        if num==0: return 0
        return 1+(num-1)%9
        
        