// Last updated: 13/09/2025, 18:45:53
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                if(x==words[i][j]){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};