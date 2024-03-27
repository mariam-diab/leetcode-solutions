class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        nums.push_back(0);
        int n = nums.size();
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] < 0 || nums[i] >= n) nums[i] = 0;
            }
        for (int i = 0; i < nums.size(); ++i) nums[nums[i] % n] += n;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] / n == 0) return i;
            }
        return n;
    }
};