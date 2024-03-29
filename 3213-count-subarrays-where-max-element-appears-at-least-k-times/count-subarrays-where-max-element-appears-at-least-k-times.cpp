class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int mx = nums[0];
        for (int n : nums) if (n > mx) mx = n;
        long long ans = 0, start = 0;
        for (int end = 0; end < nums.size(); end++) {
            if (nums[end] == mx) k--;
            while (!k) {
                if (nums[start] == mx) k++;
                start++;
            }
            ans += start;
        }
        return ans;
        
    }
};