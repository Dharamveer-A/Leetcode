// Last updated: 07/08/2025, 19:31:37
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            ans.insert(ans.begin()+index[i],nums[i]);
        }
        return ans;
    }
};