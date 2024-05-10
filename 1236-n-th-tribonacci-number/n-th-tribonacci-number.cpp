vector<int> memo(38, -1);
class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return n;
        else if(n<=2) return 1;
        if (memo[n] != -1) return memo[n];
        memo[n] = tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
        return memo[n];
        
    }
};