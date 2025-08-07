// Last updated: 07/08/2025, 19:32:27
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0; i<numRows; i++){
            vector<int> append;
            int val=1;
            for(int j=0; j<=i; j++){
                append.emplace_back(val);
                val=val*(i-j)/(j+1);
            }
            ans.emplace_back(append);
        }
        return ans;
    }
};