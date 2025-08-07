# Last updated: 07/08/2025, 19:32:30
class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        ans=int(a,2)+int(b,2)
        fans=bin(ans)[2:]
        return fans