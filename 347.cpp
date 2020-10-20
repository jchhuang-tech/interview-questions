// Given a non-empty array of integers, return the k most frequent elements.
//
// Example 1:
//
// Input: nums = [1,1,1,2,2,3], k = 2
// Output: [1,2]
//
// Example 2:
//
// Input: nums = [1], k = 1
// Output: [1]
//
// Note:
//
//     You may assume k is always valid, 1 ≤ k ≤ number of unique elements.
//     Your algorithm's time complexity must be better than O(n log n), where n is the array's size.
//     It's guaranteed that the answer is unique, in other words the set of the top k frequent elements is unique.
//     You can return the answer in any order.


// min heap approach
typedef pair<int, int> pint;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        for(auto i : nums){
            umap[i]++;
        }
        priority_queue<pint, vector<pint>, greater<pint>> minhp;
        for(auto it=umap.begin(); it!=umap.end(); it++){
            minhp.push(make_pair(it->second, it->first));
            if(minhp.size()>k){
                minhp.pop();
            }
        }
        vector<int> output;
        while(!minhp.empty()){
            output.push_back(minhp.top().second);
            minhp.pop();
        }
        return output;
    }
};
