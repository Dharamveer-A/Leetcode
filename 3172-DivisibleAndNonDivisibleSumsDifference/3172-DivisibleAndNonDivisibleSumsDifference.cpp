// Last updated: 07/08/2025, 19:30:57
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int s1=0,s2=0;
        for(int i=0; i<=n; i++){
            if (i%m!=0) s1+=i;
            else s2+=i;
        }
        return s1-s2;
    }
};