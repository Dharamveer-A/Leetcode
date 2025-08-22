// Last updated: 22/08/2025, 20:29:05
class Solution {
public:
    int numberOfSteps(int num) {
       int c=0;
       while(num){
            if((num&1)==0){
                num/=2;
                c++;
            }else{
                num--;
                c++;
            }
       } 
       return c;
    }
};