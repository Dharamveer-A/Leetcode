// Last updated: 31/07/2025, 10:33:40
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int min=INT_MAX,max=INT_MIN;
        for(int i:nums) 
            if(i>max) max=i;
        for(int i:nums) 
            if(i<min) min=i;
        for(int i:nums) 
            if(i!=min && i!=max) return i;
        return -1;
    }
};