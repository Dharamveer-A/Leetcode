# Last updated: 07/08/2025, 19:32:44
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