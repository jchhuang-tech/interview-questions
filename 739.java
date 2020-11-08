// stack approach O(N)
class Solution {
    public int[] dailyTemperatures(int[] T) {
        int[] res = new int[T.length];
        Arrays.fill(res, 0);
        Stack<Integer> stack = new Stack<Integer>();
        for(int i=T.length-1; i>=0; i--){
            if(stack.empty()){
                stack.push(i);
            }else if(T[i] >= T[stack.peek()]){
                while(!stack.empty() && T[i] >= T[stack.peek()]){
                    stack.pop();
                }
                if(!stack.empty()){
                    res[i] = stack.peek() - i;
                }
                stack.push(i);
            } else {
                res[i] = stack.peek() - i;
                stack.push(i);
            }
        }
        
        return res;
    }
}

// simplified stack approach
class Solution {
    public int[] dailyTemperatures(int[] T) {
        int[] res = new int[T.length];
        Arrays.fill(res, 0);
        Stack<Integer> stack = new Stack<Integer>();
        for(int i=T.length-1; i>=0; i--){
            while(!stack.empty() && T[i] >= T[stack.peek()]){
                stack.pop();
            }
            if(!stack.empty()){
                res[i] = stack.peek() - i;
            }
            stack.push(i);
        }
        return res;
    }
}

// next array approach O(NW)
class Solution {
    public int[] dailyTemperatures(int[] T) {
        int[] res = new int[T.length];
        for (int i=0; i<T.length; i++){
            int fast = i;
            while(fast < T.length){
                if(T[fast] > T[i]){
                    res[i] = fast-i;
                    break;
                }
                fast++;
            }
            if(fast == T.length){
                res[i] = 0;
            }
        }
        return res;
    }
}