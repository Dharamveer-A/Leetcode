# Last updated: 07/08/2025, 19:31:17
import textwrap
class Solution(object):
    def divideString(self, s, k, fill):
        """
        :type s: str
        :type k: int
        :type fill: str
        :rtype: List[str]
        """
        res = textwrap.wrap(s,k)
        res[-1] += fill * (k- len(res[-1]))
        return res