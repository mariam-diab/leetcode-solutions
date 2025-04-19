class Solution(object):
    def groupAnagrams(self, strs):
        group = {}
        for s in strs:
            count = [0]*26 
            for char in s:
                count[ord(char) - ord('a')] += 1
            count = tuple(count)
            if count not in group:
                group[count] = []
            group[count].append(s)
        res = []
        for key in group:
            res.append(group[key])
        return res


        