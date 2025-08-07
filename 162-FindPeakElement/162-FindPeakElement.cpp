// Last updated: 07/08/2025, 19:32:16
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int st=0,end=nums.size()-1,mid;
        while(st<end){
            mid=st+((end-st)>>1);
            if(nums[mid]>nums[mid+1]) end=mid;
            else st=mid+1;
        }
        return st;
    }
};