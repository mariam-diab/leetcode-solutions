class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<char> stk;
        stack<int> cnt;
        for (char c : s) {
            if (!stk.empty() && stk.top() == c) {
                cnt.top()++; } 
            else {
                stk.push(c);
                cnt.push(1); }
            if (cnt.top() == k) {
                stk.pop();
                cnt.pop(); }
        }

        string result = "";
        while (!stk.empty()) {
            result.append(cnt.top(), stk.top());
            stk.pop();
            cnt.pop();
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
