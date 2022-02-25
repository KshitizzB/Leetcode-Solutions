#include <ext/pb_ds/assoc_container.hpp>
#define ordered_set tree<pair<int, int>, null_type,less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update>

using namespace __gnu_pbds;

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> r;
        ordered_set s;
        reverse(nums.begin(), nums.end());
        for(auto &i:nums){
            r.push_back(s.order_of_key({i, -1}));
            s.insert({i, s.size()});
        }
        reverse(r.begin(), r.end());
        return r;
    }
};