// Last updated: 31/07/2025, 10:33:43
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        return vector<double> {celsius+273.15,celsius*1.8+32};
    }
};