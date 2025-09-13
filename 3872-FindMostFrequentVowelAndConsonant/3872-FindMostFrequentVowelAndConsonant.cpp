// Last updated: 13/09/2025, 18:45:45
class Solution {
public:
    int maxFreqSum(string s) {
       int c=0;
       int v=0;
       unordered_map<char,int> m;
       for(char &i: s){
            if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'){
                m[i]++;
                v=max(v,m[i]);
            }else{
                m[i]++;
                c=max(c,m[i]);
            }
       } 
       return v+c; 
    }
};