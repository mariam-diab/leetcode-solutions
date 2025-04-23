class Solution(object):
    def longestConsecutive(self, nums):
        s = set()
        for n in nums:
            s.add(n)
        max_len = 0
        for n in s:
            if n - 1 not in s:
                i = 1
                cur_len = 1
                while n + i in s:
                    cur_len += 1
                    i += 1
                max_len = max(max_len, cur_len)
        return max_len