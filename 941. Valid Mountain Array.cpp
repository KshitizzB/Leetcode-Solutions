class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size(), i=1;
        if(n<3) return false;
        while(i<n){
            if(arr[i]<=arr[i-1]) break;
            i++;
        }
        if(i==1 || i==n) return false;
        while(i<n){
            if(arr[i]>=arr[i-1]) break;
            i++;
        }
        if(i<n) return false;
        return true;
    }
};