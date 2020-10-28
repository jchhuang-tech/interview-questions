// quickselect approach
class Solution {
    public int findKthLargest(int[] nums, int k) {
        quickSelect(nums, 0, nums.length-1, k);
        return nums[k-1];
    }
    public void quickSelect(int[] nums, int start, int end, int k){
        if(start < end){
            int mid = partition(nums, start, end);
            if(mid > k-1){
                quickSelect(nums, 0, mid-1, k);
            }else{
                quickSelect(nums, mid+1, end, k);
            }
        }
    }
    public int partition(int[] nums, int start, int end){
        swap(nums, (start+end)/2, end); //choose a random pivot
        int pivot = nums[end];
        int i = start-1;
        for (int j=start; j<end; j++){
            if(nums[j] > pivot){ //put the larger elements at the front
                i++;
                swap(nums, i, j);
            }
        }
        swap(nums, i+1, end);
        return i+1;
    }
    public void swap(int[] nums, int a, int b){
        int tmp = nums[a];
        nums[a] = nums[b];
        nums[b] = tmp;
    }
}

// heap approach
class Solution {
    public int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer> minHeap = new PriorityQueue<Integer>();
        for (int i=0; i<nums.length; i++){
            minHeap.add(nums[i]);
            if(minHeap.size() > k){
                minHeap.poll();
            }
        }
        return minHeap.peek();
    }
}

// sort approach
class Solution {
    public int findKthLargest(int[] nums, int k) {
        Arrays.sort(nums);
        return nums[nums.length-k];
    }
}
