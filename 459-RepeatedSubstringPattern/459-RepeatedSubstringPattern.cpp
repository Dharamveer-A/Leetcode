// Last updated: 07/08/2025, 19:31:54
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubleS=s+s;
        return doubleS.substr(1,doubleS.length()-2).find(s)!=string::npos;
    }
};