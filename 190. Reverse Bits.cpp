class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t r = 0;
        for(int i=0; i<=31; i++) r = r|(((n>>i)&1)<<(31-i));
        return r;
    }
};