// Last updated: 22/08/2025, 20:29:58
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=numbers.size()-1,temp;
        while(l<r){
            temp=numbers[l]+numbers[r];
            if(temp==target) return {l+1,r+1};
            (temp>target)?r--:l++;
        }
        return {};
    }
};