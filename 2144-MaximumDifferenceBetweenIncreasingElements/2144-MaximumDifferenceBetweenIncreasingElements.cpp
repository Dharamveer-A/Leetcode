// Last updated: 31/07/2025, 10:33:48
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