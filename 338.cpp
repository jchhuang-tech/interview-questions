class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> v;
        v.push_back(0);
        int count = 1;
        for(int i=1; i<=num; i*=2){
            for(int j=i; j<i*2; j++){
                v.push_back(v[j-i]+1);
                count++;
                if(count>=num+1){
                    return v;
                }
            }

        }
        return v;
    }
};
