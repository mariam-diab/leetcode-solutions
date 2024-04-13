class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int c = matrix[0].size();
        vector<int> heights(c+1, 0);
        int mx = 0;
        for (auto row: matrix) {
            for (int i=0; i<c; i++) {
                if (row[i] == '1') heights[i] = heights[i] + 1;
		        else heights[i] = 0;
            }
            stack<int> s;
            for (int i = 0; i<heights.size(); i++) {
                while (!s.empty() && heights[i] < heights[s.top()]) {
                    int h = heights[s.top()], w;
                    s.pop();
                    if (s.empty()) w = i;
                    else w = i - s.top() - 1;
                    mx = max(mx, h*w);
                }
                s.push(i);
            }
        }
        return mx;
    }
};