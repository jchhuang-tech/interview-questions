class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = *max_element(candies.begin(), candies.end());
        vector<bool> ret;
        for (int i=0; i<candies.size();i++){
            if(candies[i]+extraCandies<max){
                ret.push_back(false);
            } else {
                ret.push_back(true);
            }
        }
        return ret;
    }
};
