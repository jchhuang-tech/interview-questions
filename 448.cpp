// in place Solution
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> ret;
        for(int i=0; i<n; i++){
            nums[abs(nums[i])-1] = -abs(nums[abs(nums[i])-1]);
        }
        for(int i=0; i<n; i++){
            if(nums[i]>0){
                ret.push_back(i+1);
            }
        }
        return ret;
    }
};

// extra vector solution
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n, 0);
        vector<int> ret;
        for(int i=0; i<n; i++){
            v[nums[i]-1]++;
        }
        for(int i=0; i<n; i++){
            if(v[i]==0){
                ret.push_back(i+1);
            }
        }
        return ret;
    }
};

// hash map solution

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int, int> m;
        vector<int> ret;
        for(int i=0; i<nums.size(); i++){
            if(m.find(nums[i]) == m.end()){
                m[nums[i]] = 1;
            } else {
                m[nums[i]]++;
            }
        }
        for(int i=1; i<=nums.size(); i++){
            if(m.find(i) == m.end()){
                ret.push_back(i);
            }
        }
        return ret;
    }
};
