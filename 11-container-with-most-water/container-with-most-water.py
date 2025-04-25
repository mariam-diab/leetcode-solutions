class Solution(object):
    def maxArea(self, height):
        i, j = 0, len(height) - 1
        tallest = max(height)
        mx = 0
        while i < j:
            mx = max(mx, min(height[i], height[j]) * (j - i))
            if mx >= tallest * (j - i):
                break
            if height[i] < height[j]:
                i += 1
            elif height[i] > height[j]:
                j -= 1
            elif height[i] == height[j]:
                if height[i + 1] < height[j - 1]:
                    j -= 1
                else:
                    i += 1
            
        return mx