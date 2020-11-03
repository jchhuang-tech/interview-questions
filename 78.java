// recursive approach
class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        int n = nums.length;
        if(n == 0){
            List<Integer> empty = new ArrayList();
            List<List<Integer>> res = new ArrayList();
            res.add(empty);
            return res;
        }
        int last = nums[n-1];
        int[] slice = Arrays.copyOfRange(nums, 0, n-1);
        List<List<Integer>> res = subsets(slice);
        int resSize = res.size();
        for (int i=0; i<resSize; i++){
            List<Integer> subset = new ArrayList();
            subset.addAll(res.get(i));
            subset.add(last);
            res.add(subset);
        }
        return res;
    }
}
