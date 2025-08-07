// Last updated: 07/08/2025, 19:31:28
class Solution {
public:
    bool isValid(vector<int> &position,int mid, int m){
        int ball = 1, lastPosition = position[0];
        for (int i=1; i<position.size(); i++){
            if (position[i]-lastPosition >=mid){
                ball++ ;
                lastPosition = position[i];
                if (ball == m) return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        int n = position.size()-1;
        sort(position.begin(),position.end());
        int st=1, end = position[n] - position[0] , mid = 0;
        while(st<=end){
            mid = (st + end) >> 1;
            if (isValid(position,mid,m))
                st = mid + 1 ;
            else 
                end = mid -1 ;
        }
        return end;
    }
};