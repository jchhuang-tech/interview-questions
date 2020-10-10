class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> output(2*n);
        for(int i=0; i<n; i++){
            output[2*i] = nums[i];
            output[2*i+1] = nums[i+n];
        }
        return output;
    }
};
