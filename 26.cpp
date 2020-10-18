// two pointers approach
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n==0){
            return 0;
        }
        int fast = 0;
        int slow = 0;
        while(fast<n){
            if(nums[fast] != nums[slow]){
                swap(nums[fast], nums[slow+1]);
                slow++;
            }
            fast++;
        }
        return slow+1;
    }
};


// looping approach
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0){
            return nums.size();
        }
        for(auto it=nums.begin(); it!=nums.end()-1; it++){
            while(*it==*(it+1)){
                nums.erase(it);
                if(it==nums.end()-1){
                    return nums.size();
                }
            }
        }
        return nums.size();
    }
};
