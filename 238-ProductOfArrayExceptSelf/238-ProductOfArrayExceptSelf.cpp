// Last updated: 07/08/2025, 19:32:06
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> ans(nums.size(),1);
        //To calculate prefix
        for (int i=1;i<nums.size();i++){
            ans[i]=ans[i-1]*nums[i-1];
        }
        //To calculate suffix
        int suffix=1;
        for(int i=nums.size()-2; i>=0;i--){
            suffix= suffix*nums[i+1];
            ans[i]*= suffix;
        }
        return ans;
    }
};