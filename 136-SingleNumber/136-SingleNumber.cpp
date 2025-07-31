// Last updated: 31/07/2025, 11:47:54
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i:nums)
        {
            ans^=i;
        }
        return ans;
    }
};