# reverse string approach
class Solution:
    def reverse(self, x: int) -> int:
        if x > 2 ** 31 - 1 or x < -2 ** 31:
            return 0

        if x >= 0:
            s = str(x)
            s = s[::-1]
            res = int(s)
            if res > 2 ** 31 - 1:
                return 0
            else:
                return res
        else:
            s = str(-x)
            s = s[::-1]
            res = -int(s)
            if res < -2 ** 31:
                return 0
            else:
                return res
