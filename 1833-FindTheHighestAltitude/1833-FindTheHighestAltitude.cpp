// Last updated: 07/08/2025, 19:31:25
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int m=0;
        int presum=0;
        for(int i=0; i<gain.size(); i++){
            presum+=gain[i];
            m=max(m,presum);
        }
        return m;
    }
};