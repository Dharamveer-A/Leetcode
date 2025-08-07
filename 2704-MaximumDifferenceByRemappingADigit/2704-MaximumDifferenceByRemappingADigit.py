# Last updated: 07/08/2025, 19:31:10
class Solution:
    def minMaxDifference(self, num: int) -> int:
        string=str(num)
        mx=num
        for i in range(len(string)):
            if string[i]!='9':
                mx=int(string.replace(string[i],'9'))
                break
        return mx-int(string.replace(string[0],'0'))