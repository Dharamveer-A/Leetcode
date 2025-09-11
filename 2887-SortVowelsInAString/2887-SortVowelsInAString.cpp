// Last updated: 11/09/2025, 20:33:21
class Solution {
public:
    bool isVowel(char &ch){
        return ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ;
    }
    string sortVowels(string s) {
        string strvwl="";
        for(char &ch: s){
            if(isVowel(ch)) strvwl+=ch;
        }
        int idx=0;
        sort(strvwl.begin(),strvwl.end());
        for(char &ch: s){
            if(isVowel(ch)) ch=strvwl[idx++];
        }
        return s;
    }
};