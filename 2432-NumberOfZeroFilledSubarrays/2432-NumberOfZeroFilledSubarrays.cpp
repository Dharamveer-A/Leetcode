// Last updated: 19/08/2025, 22:28:21
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long streak=0,ans=0;
        for(int &i: nums){
            streak=(i==0)?streak+1:0;
            ans+=streak;
        }
        return ans;
    }
};