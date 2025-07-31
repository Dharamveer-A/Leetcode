# Last updated: 31/07/2025, 11:48:20
class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        s=len(haystack)
        sb=len(needle)
        for i in range(s):
            if haystack[i:i+sb] == needle :
                return i

        return -1