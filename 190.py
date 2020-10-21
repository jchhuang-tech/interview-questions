class Solution:
    def reverseBits(self, n: int) -> int:
        res = 0
        for i in range (0, 32):
            res += (n & 1) << (31 - i) # n&1 is the rightmost bit
            n = n >> 1
        return res
