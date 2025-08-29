// Last updated: 29/08/2025, 19:02:57
class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        if(n<3) return 1;
        int a=0,b=1,c=1,fib=0;
        for(int i=3; i<=n; i++){
            fib=a+b+c;
            a=b;
            b=c;
            c=fib;
        }
        return c;
    }
};