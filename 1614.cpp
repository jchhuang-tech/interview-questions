class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int output = 0;
        for(char c : s){
            if(c=='('){
                depth++;
                output = max(depth, output);
            }else if(c==')') {
                depth--;
            }
        }
        return output;
    }
};
