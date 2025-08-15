// Last updated: 15/08/2025, 10:59:15
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<1) return false;
        while(n%4==0){
            n/=4;
        }
        return n==1;
    }
};