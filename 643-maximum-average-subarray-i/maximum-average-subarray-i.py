class Solution(object):
    def findMaxAverage(self, nums, k):
        i, j = 0, 0
        sum = 0
        mx = float('-inf')
        while j < len(nums):
            sum += nums[j]
            if j - i + 1 == k:
                mx = max(mx, sum / float(k))
                sum -= nums[i]
                i += 1
            j += 1
        return mx
