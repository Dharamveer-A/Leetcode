// Last updated: 31/07/2025, 10:31:58
class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> positivenums;
        for(int i:nums)
            if(i>0) positivenums.emplace(i);
        if(positivenums.empty())
            return *max_element(nums.begin(),nums.end());
        else
            return accumulate(positivenums.begin(),positivenums.end(),0);
    }
};