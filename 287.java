// Floyd's tortoise and hare algorithm
class Solution {
    public int findDuplicate(int[] nums) {
        int tor = 0, hare = 0;
        do{
            tor = nums[tor];
            hare = nums[nums[hare]];
        } while (nums[tor] != nums[hare]);
        tor = 0;
        while (nums[tor] != nums[hare]){
            tor = nums[tor];
            hare = nums[hare];
        }
        return nums[tor];
    }
}

// mark negative approach
class Solution {
    public int findDuplicate(int[] nums) {
        for (int i : nums){
            int index = Math.abs(i);
            if(nums[index] < 0){
                return index;
            }else{
                nums[index] = -nums[index];
            }
        }
        return -1;
    }
}

// hashmap approach
class Solution {
    public int findDuplicate(int[] nums) {
        HashMap<Integer, Integer> h = new HashMap<Integer, Integer>();
        for (int i : nums){
            if(h.containsKey(i)){
                return i;
            }else{
                h.put(i, 1);
            }
        }
        return -1;
    }
}
