class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> us;
        while(1){
            int sum = 0;
            while(n > 0){
                int digit = n%10;
                n /= 10;
                sum += pow(digit, 2);
            }
            if(sum==1){
                return true;
            }else if(us.find(sum) == us.end()){
                us.insert(sum);
            }else{
                return false;
            }
            n = sum;
        }
    }
};
