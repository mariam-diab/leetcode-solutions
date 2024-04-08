class Solution {
public:
    bool checkValidString(string s) {
        int left = 0, right = 0, length = s.length() - 1;
        for (int i=0; i<=length; i++) {
            if (s[i] == '(' || s[i] == '*') left++;
            else left--;
            if (s[length-i] == ')' || s[length-i] == '*') right++;
            else right--;
            if (left<0 || right<0) return false;
        }
        return true;
    }
};