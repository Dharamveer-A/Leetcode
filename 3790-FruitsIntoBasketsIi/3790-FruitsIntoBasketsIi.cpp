// Last updated: 07/08/2025, 19:30:45
class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size();
        int unplaced=n;
        for(int i: fruits){
            for(int &j: baskets){
                if(i<=j){
                    j=0;
                    unplaced--;
                    break;
                }
            }
        }
        return unplaced;
    }
};