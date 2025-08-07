// Last updated: 07/08/2025, 19:31:43
class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        int a=0,b=1,fib=0;
        for(int i=0 ; i<n ; i++){
            fib=a+b;
            a=b;
            b=fib;
        }
        return a;
    }
};