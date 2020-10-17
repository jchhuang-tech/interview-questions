class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> v;
        int n = nums.size();
        if(n==0){
            return 0;
        } else if(n==1){
            return nums.front();
        }

        v.push_back(nums[0]);
        v.push_back(max(nums[0], nums[1]));
        for(int i=2; i<n; i++){
            v.push_back(max(v[i-1], nums[i]+v[i-2]));
        }
        return v.back();
    }
};
