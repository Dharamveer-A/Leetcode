// Last updated: 07/08/2025, 19:30:46
class Solution {
public:
    bool isPrime(int n){
        if(n==1) return false;
        if(n==2) return true;
        if(n%2==0) return false;
        for(int i=3; i<=sqrt(n) ; i+=2){
            if(n%i==0) return false;
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        map<int,int> f;
        for(int i:nums)
            f[i]++;
        for(pair<int,int> j:f){
            if(isPrime(j.second)) return true;
        }
        return false;
    }
};