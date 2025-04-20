class Solution(object):
    def productExceptSelf(self, nums):
        n = len(nums)
        prefix = [1]*(n+1)
        suffix = [1]*(n+1)
        for i in range(n):
            prefix[i+1] = prefix[i] * nums[i]
            suffix[n-i-1] = suffix[n-i] * nums[n-i-1] 
        for i in range(n):
            prefix[i] *= suffix[i+1]
        return prefix[:n]
                