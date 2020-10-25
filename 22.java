// traceback approach
class Solution {
    public static int n;
    public static List<String> res;
    public List<String> generateParenthesis(int n) {
        this.n = n;
        res = new ArrayList<>();
        add("", 0, 0);
        return res;
    }
    public void add(String str, int left, int right) {
        if(str.length() == 2*n){
            res.add(str);
            return;
        }
        if(left < n){
            add(str+"(", left+1, right);
        }
        if(right < left){
            add(str+")", left, right+1);
        }
        return;
    }
}
