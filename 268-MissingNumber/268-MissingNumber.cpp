// Last updated: 07/08/2025, 19:32:03
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int expected_sum=n*(n+1)/2,actual_sum=0;
        for (int i:nums){
            actual_sum+=i;
        }
        return expected_sum-actual_sum;
    }
};