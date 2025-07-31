// Last updated: 31/07/2025, 11:47:45
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n >0 && (n & (n-1))==0;
    }
};