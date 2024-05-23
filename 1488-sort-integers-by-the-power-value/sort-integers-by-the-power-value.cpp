int power_of_number(int n, int steps, vector<int>& memo) {
    int x = n;
    while (x != 1) {
        if (x < memo.size() && memo[x] != -1) {
            memo[n] = memo[x] + steps;
            return memo[n];
        }
        if (x % 2 == 0) x /= 2;
        else x = 3 * x + 1;
        steps++;
    }
    memo[n] = steps;
    return memo[n];
}

class Solution {
public:
    int getKth(int lo, int hi, int k) {
        vector<int> memo(hi + 1, -1);
        for (int i = lo; i <= hi; i++) power_of_number(i, 0, memo);
        multimap <int, int> sorted_map;
        for (int i = lo; i < memo.size(); i++) sorted_map.insert(std::make_pair(memo[i], i));
        auto it = sorted_map.begin();
        advance(it, k - 1);
        return it->second;
    }
};