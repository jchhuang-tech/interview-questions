class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> v;
        for(int i=1; i<=n; i++){
            if(i%3!=0 && i%5!=0){
                v.push_back(to_string(i));
            } else {
                string s = "";
                if(i%3==0){
                    s = s + "Fizz";
                }
                if(i%5==0){
                    s = s + "Buzz";
                }
                v.push_back(s);
            }
        }
        return v;
    }
};
