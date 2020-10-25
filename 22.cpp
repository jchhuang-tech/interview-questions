// traceback approach
class Solution {
public:
    int n;
    vector<string> v;

    vector<string> generateParenthesis(int n) {
        this->n = n;
        add("", 0, 0);
        return v;
    }
    void add(string str, int left, int right){
        if(str.length() == n*2){
            v.push_back(str);
            return;
        }
        if (left < n) {
            add(str+"(", left+1, right);
        }
        if (right < left) {
            add(str+")", left, right+1);
        }
        return;
    }
};
