// Last updated: 26/08/2025, 20:22:22
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(nums.begin(),nums.end());
        for(int i:nums){
            ans.emplace_back(i);
        }
        return ans;
    }
};