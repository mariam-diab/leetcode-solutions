class Solution(object):
    def twoSum(self, nums, target):
        dictIndexes = {}
        for i, n in enumerate(nums):
            if target - n in dictIndexes:
                return [dictIndexes[target - n], i]
            else: dictIndexes[n] = i
        return []


        
        
        