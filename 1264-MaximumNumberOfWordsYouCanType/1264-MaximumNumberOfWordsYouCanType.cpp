// Last updated: 15/09/2025, 22:39:52
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        bool flag=false;
        int c=0;
        for(char &ch: text){
            if(ch==' '){
                if(!flag) c++;
                flag=false;
            }
            if(brokenLetters.find(ch)!=string::npos) flag=true;
        }
        if(!flag) c++;
        return c;
    }
};