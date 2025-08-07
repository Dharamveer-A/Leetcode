// Last updated: 07/08/2025, 19:32:15
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //moore's voting algorithm
        int f=0,ans=0;
        for(int i=0; i<nums.size(); i++){
            if (f==0) ans = nums[i];
            if (ans == nums[i]) f++;
            else f--;
        }
        return ans;
    }
};