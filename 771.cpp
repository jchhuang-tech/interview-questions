class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int output=0;
        for (char s : S){
            for(char j : J){
                if(s==j){
                    output++;
                    break;
                }
            }
        }
        return output;
    }
};
