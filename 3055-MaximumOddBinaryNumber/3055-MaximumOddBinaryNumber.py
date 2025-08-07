# Last updated: 07/08/2025, 19:31:06
class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        return '1'*(s.count('1')-1)+'0'*(len(s)-s.count('1'))+'1'