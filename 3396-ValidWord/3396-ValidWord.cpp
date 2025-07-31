// Last updated: 31/07/2025, 10:33:30
class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3) return false;
        bool c=false,v=false;
        for(char i:word){
            if(isalpha(i)){
                i=tolower(i);
                if(i=='a'|| i=='e' || i=='i' || i=='o' || i=='u') v=true;
                else c=true;
            }
            else if(!isdigit(i)) return false;
        }
        return c&&v;
    }
};