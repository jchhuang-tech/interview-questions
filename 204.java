class Solution {
    public int countPrimes(int n) {
        boolean[] prime = new boolean[n];
        Arrays.fill(prime, true);
        for(int i=2; i<(n+1)/2; i++){
            for(int j=2*i; j<n; j+=i){
                prime[j] = false;
            }
        }
        int count = 0;
        for(int i=2; i<n; i++){
            if(prime[i] == true) {
                count++;
            }
        }
        return count;
    }
}
