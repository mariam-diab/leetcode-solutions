class Solution(object):
    def characterReplacement(self, s, k):
        left = 0
        freq = {}
        max_freq = 0
        longest = 0
        for right in range(len(s)):
            freq[s[right]] = freq.get(s[right], 0) + 1
            max_freq = max(max_freq, freq[s[right]])
            if (right - left + 1) - max_freq > k:
                freq[s[left]] -= 1
                left += 1
            longest = max(longest, right - left + 1)

        return longest

        