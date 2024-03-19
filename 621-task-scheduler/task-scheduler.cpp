class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int freq[26] = {0}, mx = 0;
        for (char task : tasks) {
            freq[task-'A']++;
            mx = max(mx, freq[task-'A']);
        }
        size_t total = (mx-1)*(n+1);
        for (int f : freq) if (f == mx) total++;

        return max(tasks.size(), total);
    }
};