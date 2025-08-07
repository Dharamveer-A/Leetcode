// Last updated: 07/08/2025, 19:31:34
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int size=nums.size(),k=0;
        vector<int> ans(size);
        for(int i=0; i<n; i++){
            ans[k] = nums[i];
            ans[k+1] = nums[n+i];
            k+=2;
        }
        return ans;
    }
};