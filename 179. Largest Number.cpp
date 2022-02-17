class Solution {
public:
    static int compare(string a, string b){
        return a.append(b).compare(b.append(a))>0?1:0;
    }
    
    string largestNumber(vector<int>& nums) {
        string r;
        vector<string> v;
        for(auto &i:nums) v.push_back(to_string(i));
        sort(v.begin(), v.end(), compare);
        for(auto &i:v) r += i;
        return r[0]=='0'?"0":r;
    }
};