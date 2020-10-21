class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        a = m-1
        b = n-1
        for i in range(m+n, 0, -1):
            if b < 0:
                break
            elif a < 0 or nums1[a] < nums2[b]:
                nums1[i-1] = nums2[b]
                b -= 1
            elif nums1[a] >= nums2[b]:
                nums1[i-1] = nums1[a]
                a -= 1
