// Last updated: 07/08/2025, 19:31:22
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mx=-1,premin=nums[0],n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]>premin) mx=max(mx,nums[i]-premin);
            else premin=nums[i];
        }
        return mx;
    }
};