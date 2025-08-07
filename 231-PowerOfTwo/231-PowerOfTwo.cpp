// Last updated: 07/08/2025, 19:32:09
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n >0 && (n & (n-1))==0;
    }
};