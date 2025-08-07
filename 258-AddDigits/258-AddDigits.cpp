// Last updated: 07/08/2025, 19:32:10
class Solution {
public:
    int addDigits(int num) {
        if (num==0)
            return 0;
        return 1+(num-1)%9;
    }
};