class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size(), i=n-1;
        if(digits[i]!=9) digits[i] += 1;
        else{
            while(i>-1 && i<n && digits[i]==9) digits[i--] = 0;
            if(i==-1) digits.insert(digits.begin(), 1);
            else digits[i] += 1;
        }
        return digits;
    }
};