class Solution {
public:
    int numberOfSteps (int num) {
        int output=0;
        while(num>0){
            output++;
            if(num%2==0){
                num/=2;
            }else{
                num--;
            }
        }
        return output;

    }
};
