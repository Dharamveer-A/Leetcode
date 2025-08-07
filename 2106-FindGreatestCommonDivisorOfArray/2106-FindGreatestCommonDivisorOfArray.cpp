// Last updated: 07/08/2025, 19:31:23
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int small=INT_MAX,large=INT_MIN;
        for(int i:nums)
            if(small>i) small=i;
        for(int i:nums)
            if(large<i) large=i;
        for(int i=small; i>0 ; i--)
            if(large%i==0 && small%i==0) return i;
        return 1;
    }
};