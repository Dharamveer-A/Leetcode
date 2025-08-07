# Last updated: 07/08/2025, 19:32:04
class Solution(object):
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        if num==0: return 0
        return 1+(num-1)%9
        
        