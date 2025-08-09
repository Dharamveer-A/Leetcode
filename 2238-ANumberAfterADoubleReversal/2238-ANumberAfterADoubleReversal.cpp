// Last updated: 09/08/2025, 22:37:50
class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num==0) return true;
        return num%10!=0;
    }
};