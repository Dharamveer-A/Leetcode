// Last updated: 03/09/2025, 18:42:37
class Solution {
public:
    int sum(int n){
        int s=0; 
        while(n){
            s+=n%10;
            n/=10;
        }
        return s;
    }
    int countBalls(int lowLimit, int highLimit) {
        int box,ans=0;
        vector<int> m(46,0);
        for(int i=lowLimit; i<=highLimit; i++){
            int box=sum(i);
            m[box]++;
            ans=max(ans,m[box]);
        }
        return ans;
    }
};