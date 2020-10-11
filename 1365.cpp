class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> output(nums.size(), 0);
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]>nums[j]){
                    output[i]++;
                } else if (nums[i]<nums[j]){
                    output[j]++;
                }
            }
        }
        return output;
    }
};
