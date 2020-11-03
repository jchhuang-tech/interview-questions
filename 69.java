// binary search
class Solution {
    public int mySqrt(int x) {
        if (x < 2) return x;
        int left = 1;
        int right = x;
        while(left < right){
            if(left == right-1)return left;
            int mid = (right+left)/2;
            if (mid > x/mid){ // in the left
                right = mid;
            } else if (mid < x/mid) { // in the right
                left = mid;
            } else {
                return mid;
            }
        }
        return left;
    }
}
