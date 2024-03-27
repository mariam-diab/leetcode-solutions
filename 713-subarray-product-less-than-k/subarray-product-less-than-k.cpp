#include <vector>
using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int start = 0, end = 0, count = 0;
        long long product = 1;
        while (end < n) {
            product *= nums[end];
            while (start <= end && product >= k) {
                product /= nums[start];
                start++;
            }
            count += end - start + 1;
            end++;
        }
        return count;
    }
};
