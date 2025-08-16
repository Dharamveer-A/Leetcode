// Last updated: 16/08/2025, 12:16:24
class Solution {
public:
    int maximum69Number (int num) {
       string s=to_string(num);
       for(char &ch: s){
            if(ch=='6'){
                ch='9';
                break;
            }
       }
       return stoi(s);
    }
};