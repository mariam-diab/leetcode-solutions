class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> visited;
        for (int n : arr) {
            if (visited.count(n*2) || (n%2 == 0 && visited.count(n/2)))
                return true;
            visited.insert(n);
        }
        return false;
    }
};