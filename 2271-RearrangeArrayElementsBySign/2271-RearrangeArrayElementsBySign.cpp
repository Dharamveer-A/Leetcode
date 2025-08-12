// Last updated: 12/08/2025, 21:48:04
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size(),pidx=0,nidx=1;
        vector<int> ans(n);
        for(int i: nums){
            if(i>0){
                ans[pidx]=i;
                pidx+=2;
            }else{
                ans[nidx]=i;
                nidx+=2;
            }
        }
        return ans;
    }
};