// Last updated: 07/08/2025, 19:31:51
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int st=0,end=n-1,mid;
        while(st<=end){
            mid=st+(end-st)/2;
            if(mid==0 && nums[0]!=nums[1]) return nums[0];
            else if(mid==n-1 && nums[mid]!=nums[mid-1]) return nums[mid];
            else if(nums[mid]!=nums[mid-1] && nums[mid+1]!=nums[mid]) return nums[mid];
            else if(mid%2==0){//both side even 
                if (nums[mid]==nums[mid-1]) end=mid-1;
                else st=mid+1;
            }
            else{//both side odd
                if(nums[mid]==nums[mid-1]) st=mid+1;
                else end=mid-1;
            }
        }
        return -1;
    }
};