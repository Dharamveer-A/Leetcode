// Last updated: 13/08/2025, 19:08:21
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1) return false;
        while(n%3==0){
            n/=3;
        }
        return n==1;
    }
};