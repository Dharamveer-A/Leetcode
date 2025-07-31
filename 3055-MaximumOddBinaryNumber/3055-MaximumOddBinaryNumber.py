# Last updated: 31/07/2025, 10:33:40
class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        return '1'*(s.count('1')-1)+'0'*(len(s)-s.count('1'))+'1'