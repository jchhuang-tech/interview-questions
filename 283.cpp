class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int firstZero = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0 && nums[firstZero]==0){
                swap(nums[i], nums[firstZero]);
            }
            if(nums[firstZero]!=0){
                firstZero++;
            }
        }
    }
};
