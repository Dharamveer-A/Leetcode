// Last updated: 09/08/2025, 22:37:54
class Solution {
public:
    bool isThree(int n) {
        if(n==4) return true;
        int c=0;
        for(int i=3; i<n/2; i++){
            if(n%i==0){
                c++;
                if(c>1) return false;
            }
        }
        return c==1;
    }
};