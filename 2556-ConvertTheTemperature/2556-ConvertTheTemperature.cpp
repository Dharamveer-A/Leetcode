// Last updated: 07/08/2025, 19:31:12
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        return vector<double> {celsius+273.15,celsius*1.8+32};
    }
};