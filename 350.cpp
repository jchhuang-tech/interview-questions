class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        unordered_map<int, int> umap;
        for(int i=0; i<nums1.size(); i++){
            umap[nums1[i]]++;
        }
        for(int i=0; i<nums2.size(); i++){
            if(umap[nums2[i]] > 0){
                v.push_back(nums2[i]);
                umap[nums2[i]]--;
            }
        }
        return v;
    }
};
