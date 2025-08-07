// Last updated: 07/08/2025, 19:32:35
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1,c=0;
        while(i>=0  && s[i]==' '){
            i--;
        }
        while(i>=0  && s[i]!=' '){
            c++;
            i--;
        }
        return c;
    }
};