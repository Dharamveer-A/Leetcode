// Last updated: 07/08/2025, 19:32:39
class Solution {
public:
    double myPow(double x, int n) {
        if (n==0) return 1;
        if (n==1) return x;
        if (x==0) return 0;
        if (x==1) return 1;
        if (x==-1 && n%2!=0) return -1;
        if (x==-1 && n%2==0) return 1;
        long binForm=(n>0)?n:-(long)n;
        x=(n>0)?x:1/x;
        double ans=1;
        while(binForm>0){
            if(binForm%2==1) ans*=x;
            x*=x;
            binForm/=2;
        }
        return ans;
    }
};