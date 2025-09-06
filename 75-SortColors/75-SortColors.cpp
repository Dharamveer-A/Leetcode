// Last updated: 06/09/2025, 21:28:13
class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int> m={{0,0},{1,0},{2,0}};
        int idx=0;
        for(int i: nums){
            m[i]++;
        }
        for(int i=0; i<3; i++){
            int freq=m[i];
            for(int j=0; j<freq; j++){
                nums[idx++]=i;
            }
        }
    }
};