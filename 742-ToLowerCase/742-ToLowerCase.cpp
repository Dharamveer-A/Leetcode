// Last updated: 31/07/2025, 10:34:04
class Solution {
public:
    string toLowerCase(string s) {
        string ans="";
        for(char c:s){
            ans+=tolower(c);
        }
        return ans;
    }
};