// Last updated: 29/08/2025, 19:03:13
class Solution {
public:
    int countPrimes(int n) {
        if(n<3) return 0;
        vector<bool> isPrime(n,true);
        int s=sqrt(n)+1;
        isPrime[0]=isPrime[1]=false;
        for(int i=2; i<s; i++){
            if(isPrime[i]){
                for(long j=i*i; j<n; j+=i){
                    isPrime[j]=false;
                }
            }
        }
        return count(isPrime.begin(),isPrime.end(),true);
    }
};