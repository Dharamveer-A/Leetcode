// Last updated: 31/07/2025, 10:33:44
class Solution {
public:
    int smallestEvenMultiple(int n) {
        return n%2==0 ? n : 2*n;
    }
};