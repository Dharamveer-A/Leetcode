// Last updated: 14/08/2025, 21:53:59
class Solution {
public:
    string largestGoodInteger(string num) {
        char ans='\0';
        for(int i=0; i<num.size()-2; i++){
            if(num[i]==num[i+1] && num[i]==num[i+2]){
                ans=max(ans,num[i]);
            }
        }
        return (ans=='\0')?"":string(3,ans);
    }
};