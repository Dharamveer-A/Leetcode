// Last updated: 11/08/2025, 22:28:31
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        if(n%2!=0) ans.emplace_back(0);
        for(int i=1; i<n/2+1; i++){
            ans.emplace_back(i);
            ans.emplace_back(-i);
        }
        return ans;
    }
};