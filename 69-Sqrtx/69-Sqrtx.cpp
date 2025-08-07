// Last updated: 07/08/2025, 19:32:29
class Solution {
public:
    int mySqrt(int x) {
        int st=0,end=x;
        while(st<=end){
            long mid = st+end >> 1;
            if (mid*mid==x) return mid;
            else if (mid*mid > x) end=mid-1;
            else st=mid+1;
        }
        return end;
    }
};