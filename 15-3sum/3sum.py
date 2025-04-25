class Solution(object):
    def threeSum(self, nums):
        nums.sort()
        i, j, k= 0, 1, len(nums) - 1
        res = []
        while j < k and i < k - 1:
            if nums[j] + nums[k] > -nums[i]:
                k -= 1
            elif nums[j] + nums[k] < -nums[i]:
                j += 1
            elif nums[j] + nums[k] == -nums[i]:
                res.append([nums[i], nums[j], nums[k]])
                j += 1
                while j < len(nums) and nums[j] == nums[j - 1]:
                    j +=1
                k -= 1
                while k > i and nums[k] == nums[k + 1]:
                    k -= 1
            if j >= k:
                i += 1
                while i < len(nums) and nums[i] == nums[i - 1]:
                    i += 1
                j = i + 1
                k = len(nums) - 1
            
        return res