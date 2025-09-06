// Last updated: 06/09/2025, 21:28:47
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        vector<bool> seen(n+1,false);
        seen[0]=true;
        for(int i: nums){
            if(i>0 && i<=n){
                seen[i]=true;
            }
        }
        for(int i=0; i<=n; i++){
            if(!seen[i]){
                return i;
            }
        }
        return n+1;
    }
};