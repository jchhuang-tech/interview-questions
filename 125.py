class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = re.sub(r'\W|_', '', s)
        r = s[::-1]
        r = re.sub(r'\W|_', '', r)
        if s.lower() == r.lower():
            return True
        else:
            return False
        
