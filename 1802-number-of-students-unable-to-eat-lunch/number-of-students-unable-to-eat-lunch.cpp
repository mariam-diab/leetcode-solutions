class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int cnt = 0;
        while (!students.empty()) {
            if (students[0] == sandwiches[0]) {
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                cnt = 0;
            } else {
                students.push_back(students[0]);
                students.erase(students.begin());
                cnt++;
            }
            if (cnt == students.size()) break;
        }
        return cnt;
        
    }
};