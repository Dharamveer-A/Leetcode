# Last updated: 07/08/2025, 19:31:35
class Solution(object):
    def findLucky(self, arr):
        """
        :type arr: List[int]
        :rtype: int
        """
        f={}
        for num in arr:
            if num in f:
                f[num]+=1
            else :
                f[num]=1
        ans = -1
        for k,v in f.items():
            if k==v:
                ans = max(ans, k)
        return ans
        