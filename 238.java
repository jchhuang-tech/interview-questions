// O(1) extra space approach
class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] res = new int[n];
        res[0] = 1;
        for (int i=1; i<n; i++){
            res[i] = res[i-1] * nums[i-1];
        }
        int r = 1;
        for (int i=n-2; i>=0; i--){
            r *= nums[i+1];
            res[i] = r * res[i];
        }
        return res;
    }
}

// two extra arrays approach
class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] left = new int[n];
        int[] right = new int[n];
        left[0] = 1;
        for (int i=1; i<n; i++){
            left[i] = left[i-1] * nums[i-1];
        }
        right[n-1] = 1;
        for (int i=n-2; i>=0; i--){
            right[i] = right[i+1] * nums[i+1];
        }
        int[] res = new int[n];
        for(int i=0; i<n; i++){
            res[i] = left[i] * right[i];
        }
        return res;
    }
}