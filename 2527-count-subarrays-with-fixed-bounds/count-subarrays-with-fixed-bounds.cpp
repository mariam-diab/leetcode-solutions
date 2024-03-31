class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long res = 0;
        int j = -1, mn = -1, mx = -1;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] < minK || nums[i] > maxK) j = i;
            if (nums[i] == minK) mn = i;
            if (nums[i] == maxK) mx = i;
            res += max(0, min(mn, mx) - j);
        }
        
        return res;
        
    }
};