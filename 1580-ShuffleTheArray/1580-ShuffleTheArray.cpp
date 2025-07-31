// Last updated: 31/07/2025, 21:12:31
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