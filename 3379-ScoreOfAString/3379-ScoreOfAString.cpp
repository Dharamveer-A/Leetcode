// Last updated: 28/08/2025, 19:40:59
class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        for(int i=1; i<s.size(); i++){
            score+=abs(s[i]-s[i-1]);
        }
        return score;
    }
};