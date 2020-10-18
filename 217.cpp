class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> umap;
        for(int i=0; i<nums.size(); i++){
            if(umap.find(nums[i]) != umap.end()){
                return true;
            } else {
                umap[nums[i]] = true;
            }
        }
        return false;
    }
};
