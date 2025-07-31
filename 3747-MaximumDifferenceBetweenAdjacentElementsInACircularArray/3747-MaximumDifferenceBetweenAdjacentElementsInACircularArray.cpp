// Last updated: 31/07/2025, 10:31:54
class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n=nums.size(),ans=abs(nums[0]-nums[n-1]);
        for (int i=0;i<n-1;i++){
            ans=max(ans,abs(nums[i]-nums[i+1]));
        }
        return ans;
    }
};