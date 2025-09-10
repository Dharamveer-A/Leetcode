// Last updated: 10/09/2025, 22:36:52
class Solution {
public:
    int numberOfCuts(int n) {
        if(n==1) return 0;
        return (n%2==0)?n/2:n;
    }
};