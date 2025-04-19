class Solution(object):
    def containsDuplicate(self, nums):
        # sort -> O(nlong) and O(n)
        # dict and set -> O(n) and O(k)
        seen = set()
        for n in nums:
            if n in seen:
                return True
            else: 
                seen.add(n)
        return False

        