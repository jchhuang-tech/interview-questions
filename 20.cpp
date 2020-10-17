class Solution {
public:
    bool isValid(string s) {
        stack <int> stk;
        for (char& c : s){
            if(c == '('){
                stk.push(1);
            } else if (c == '['){
                stk.push(2);
            } else if (c == '{'){
                stk.push(3);
            } else if (c == ')'){
                if(stk.empty() || stk.top() != 1){
                    return false;
                } else {
                    stk.pop();
                }
            } else if (c == ']'){
                if(stk.empty() || stk.top() != 2){
                    return false;
                } else {
                    stk.pop();
                }
            } else if (c == '}'){
                if(stk.empty() || stk.top() != 3){
                    return false;
                } else {
                    stk.pop();
                }
            }
        }

        if (stk.empty()){
            return true;
        } else {
            return false;
        }
    }
};
