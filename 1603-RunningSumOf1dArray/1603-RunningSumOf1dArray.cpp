// Last updated: 20/08/2025, 21:53:22
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        ans[0]=nums[0];
        for(int i=1; i<n; i++){
            ans[i]=nums[i]+ans[i-1];
        }
        return ans;
    }
};