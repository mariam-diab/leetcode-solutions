class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        vector<int> count(nums.size() + 1, 0);
        int total_count = 0, curr_count = 0, left = 0, right = 0;
        while (right<nums.size()) {
            if (++count[nums[right++]] == 1) k--;
            if (k < 0) {
                --count[nums[left++]];
                k++;
                curr_count = 0;
            }
            if (k == 0) {
                while (count[nums[left]] > 1) {
                    --count[nums[left++]];
                    curr_count++;
                }
                total_count += (curr_count + 1);
            }
        }
        return total_count;
        
    }
};