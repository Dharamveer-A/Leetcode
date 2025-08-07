// Last updated: 07/08/2025, 19:31:48
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