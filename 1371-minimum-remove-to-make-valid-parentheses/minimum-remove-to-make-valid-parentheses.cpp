class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int right = 0, s_len = s.length(), left = 0;
        for (int i = s_len - 1; i >= 0; i--) {
            if (s[i] == '(') {
                if (right == 0) s.erase(i, 1);
                else right--;
            }
            else if (s[i] == ')') right++;
        }
        while (right > 0) {
            if (s[left] == ')') {
                s.erase(left, 1);
                right--;
            }
            else left++;
        }
        return s;
    }
};