class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if strs == []:
            return ""
        res = ""
        minLen = 200
        for s in strs:
            minLen = min(minLen, len(s))

        for i in range(0, minLen):
            for j in range(0, len(strs)-1):
                if strs[j][i] != strs[j+1][i]:
                    return res
            res += strs[0][i]
        return res
