// Last updated: 07/08/2025, 19:31:49
class Solution {
public:
    bool isDivide(int n){
        if(n%10==0) return false;
        int temp=n;
        while(temp){
            if(temp%10==0 || n%(temp%10)!=0) return false; 
            temp/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left ; i<=right ; i++){
            if(isDivide(i)) ans.emplace_back(i);
        }
        return ans;
    }
};