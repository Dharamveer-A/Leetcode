// Last updated: 26/08/2025, 20:22:00
class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
      int longdiag=0,diag=0,area=0;
      for(int i=0; i<dimensions.size(); i++){
        diag=dimensions[i][0]*dimensions[i][0]+dimensions[i][1]*dimensions[i][1];
        if(longdiag<diag){
            longdiag=diag;
            area=dimensions[i][0]*dimensions[i][1];
        }else if(longdiag==diag){
            area=max(area, dimensions[i][0]*dimensions[i][1]);
        }
      }
      return area;  
    }
};