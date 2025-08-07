// Last updated: 07/08/2025, 19:31:15
class Solution {
public:
    int smallestEvenMultiple(int n) {
        return n%2==0 ? n : 2*n;
    }
};