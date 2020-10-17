class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        vector<int> output;
        for(int i=0; i<nums.size(); i++){
            int comp = target - nums[i];
            std::unordered_map<int,int>::const_iterator got = umap.find(comp);
            if(got != umap.end() && got->second != i){
                output.push_back(got->second);
                output.push_back(i);
                return output;
            }
            umap[nums[i]] = i;
        }
        return output;
    }
};
