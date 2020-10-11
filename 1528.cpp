class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string output(s.size(), ' ');
        for(int i=0; i<s.size();i++){
            output[indices[i]] = s[i];
        }
        return output;
    }
};
