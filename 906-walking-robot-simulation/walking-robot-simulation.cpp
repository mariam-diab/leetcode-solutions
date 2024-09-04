class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int x = 0, y = 0, index = 0, mx_distance = 0;
        vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        unordered_set<string> obstacle;
        for (auto o : obstacles) obstacle.insert(to_string(o[0]) + "," + to_string(o[1]));
        for (int c : commands) {
            if (c == -2) index = (index + 3) % 4;
            else if (c == -1) index = (index + 1) % 4;
            else {
                for (int i = 0; i < c; i++) {
                    int nextx = x + directions[index].first;
                    int nexty = y + directions[index].second;
                    string pos = to_string(nextx) + "," + to_string(nexty);
                    if (obstacle.find(pos) != obstacle.end()) break;
                    x = nextx;
                    y = nexty;
                    mx_distance = max(mx_distance, x * x + y * y);
                }
            }
        }

        return mx_distance;
    }
};
