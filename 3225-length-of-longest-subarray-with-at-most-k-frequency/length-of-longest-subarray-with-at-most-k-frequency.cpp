class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int res = 0, start = -1;
        unordered_map<int, int> freq;
        for (int end = 0; end < nums.size(); end++) {
            freq[nums[end]]++;
            while (freq[nums[end]] > k) {
                start++;
                freq[nums[start]]--;
            }
            res = max(res, end - start);
        }
        
        return res;
    }
};