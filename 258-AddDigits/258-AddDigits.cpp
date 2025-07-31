// Last updated: 31/07/2025, 11:47:47
class Solution {
public:
    int addDigits(int num) {
        if (num==0)
            return 0;
        return 1+(num-1)%9;
    }
};