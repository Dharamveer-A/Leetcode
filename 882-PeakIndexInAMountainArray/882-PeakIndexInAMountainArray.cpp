// Last updated: 07/08/2025, 19:31:45
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st=1,end=arr.size()-2,mid;
        while(st<=end){
            mid=st+(end-st)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
            else if(arr[mid]<arr[mid-1]) end=mid-1;
            else st=mid+1;
        }
        return -1;
    }
};