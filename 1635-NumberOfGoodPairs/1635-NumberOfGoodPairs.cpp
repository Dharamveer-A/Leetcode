// Last updated: 07/08/2025, 19:31:31
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size(),c=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]==nums[j]) c++;
            }
        }
        return c;
    }
};