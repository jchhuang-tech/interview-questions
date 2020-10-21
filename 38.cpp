class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        for(int i=1; i<n; ++i){
            s = getCount(s);
        }
        return s;
    }

    string getCount(string prev){
        string s;
        int slow = 0;
        int fast = 0;
        while(fast <= prev.length()){
            if(prev[fast]==prev[slow]){
                fast++;
            } else {
                s = s + to_string(fast-slow);
                s.push_back(prev[slow]);
                slow = fast;
                fast++;
            }
        }
        return s;
    }
};
