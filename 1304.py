class Solution:
    def sumZero(self, n: int) -> List[int]:
        ls = []
        if n % 2 != 0:
            for i in range(n-1):
                if i % 2 == 0:
                    ls.append(i+1)
                else:
                    ls.append(0-ls[i-1])
            ls.append(0)
        else:
            for i in range(n):
                if i % 2 == 0:
                    ls.append(i+1)
                else:
                    ls.append(0 - ls[i-1])
        return ls
        
