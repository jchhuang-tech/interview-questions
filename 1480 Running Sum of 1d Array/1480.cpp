class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> rs;
        rs.push_back(nums[0]);
        for (int i=1;i<nums.size();i++){
            rs.push_back(rs.back()+nums[i]);
        }
        return rs;
    }
};