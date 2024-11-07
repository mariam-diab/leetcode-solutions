
class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        int curr_max = 0, prev_max = 0, curr_min = 0, prev_count = 0;

        for (int num : nums) {
            int curr_count = __builtin_popcount(num);
            if (prev_count == curr_count) {
                curr_min = min(curr_min, num);
                curr_max = max(curr_max, num);
            }
            else if (curr_min < prev_max) return false;
            else {
                prev_max = curr_max;
                curr_min = curr_max = num;
                prev_count = curr_count;
            }
        }
        return curr_min >= prev_max;
    }
};