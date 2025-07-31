// Last updated: 31/07/2025, 11:47:31
class Solution {
public:
    bool detectCapitalUse(string word) {
        int caps=0;
        for(char c:word){
            if (c<91) caps++;
        }
        if(caps==word.size() || caps==0) return true;
        else if (caps==1 && word[0]<91) return true;
        return false;
    }
};