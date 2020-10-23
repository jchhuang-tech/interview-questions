// recursive approach
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size()==0){
            return {{}};
        }
        vector<vector<int>> output;
        vector<int> cur;
        helper(output, nums, cur);
        return output;
    }
    void helper(vector<vector<int>>& output, vector<int> nums, vector<int> cur){
        for (int i=0; i<nums.size(); i++){
            cur.push_back(nums[i]);
            nums.erase(nums.begin()+i);
            if(nums.size()==0){
                output.push_back(cur);
            }
            helper(output, nums, cur);
            nums.insert(nums.begin()+i, cur.back());
            cur.pop_back();
        }
    }
};

// STL permutation approach (not for interviews)
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> output;
        sort(nums.begin(), nums.end());
        do {
            output.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));
        return output;
    }
};
