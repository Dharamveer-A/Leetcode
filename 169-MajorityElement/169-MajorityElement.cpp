// Last updated: 31/07/2025, 11:47:51
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