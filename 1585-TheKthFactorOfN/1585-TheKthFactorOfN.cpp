// Last updated: 07/08/2025, 19:31:32
class Solution {
public:
    int kthFactor(int n, int k) {
        for(int i=1; i<=n; i++){
            if(n%i==0){
                k--;
                if(k==0) return i;
            }
        }
        return -1;
    }
};