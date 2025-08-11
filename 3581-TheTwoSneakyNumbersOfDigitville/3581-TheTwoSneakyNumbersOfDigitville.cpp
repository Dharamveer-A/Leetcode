// Last updated: 11/08/2025, 22:27:56
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
       int n=nums.size();
       vector<int> ans;
       for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]==nums[j]){
                    ans.emplace_back(nums[i]);
                }
            }
        }
        return ans;
    }
};