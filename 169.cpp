class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> umap;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(umap.find(nums[i]) == umap.end()){
                umap[nums[i]] = 1;
            } else {
                umap[nums[i]]++;
                if(umap[nums[i]] > n/2){
                    return nums[i];
                }
            }
        }
        return nums.back();
    }
};
