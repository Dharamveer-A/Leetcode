// Last updated: 07/08/2025, 19:31:42
class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
       return (points[1][1]-points[0][1])*(points[2][0]-points[1][0]) != (points[2][1]-points[1][1])*(points[1][0]-points[0][0]);
    }
};