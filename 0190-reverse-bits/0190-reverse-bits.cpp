class Solution {
public:
uint32_t reverseBits(uint32_t n) {
auto ret = 0;
for (auto i = 0; i < 32; ++i) {
ret = (ret << 1) + (n & 1);
n >>= 1;
}
return ret;
}
};