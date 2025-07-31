// Last updated: 31/07/2025, 11:48:06
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